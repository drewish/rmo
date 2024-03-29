<?php

/**
 * @file
 * Implementation of migration from WordPress into Drupal
 */

abstract class WordPressMigration extends DynamicMigration {
  /**
   * The filespec of the WXR file this migration is based on.
   *
   * @var string
   */
  protected $wxrFile;

  /**
   * The blog object representing a set of migrations.
   *
   * @var WordPressBlog
   */
  protected $blog;

  /**
   * Constructor - general setup for WordPress migrations.
   *
   * @param array $arguments
   *  'filename' => WXR file managed by this migration
   */
  public function __construct(array $arguments) {
    if (!isset($arguments['filename'])) {
      throw new Exception(t('Filename is a required parameter for WordPress migrations'));
    }

    // Must be set before calling the parent constructor, which will call
    // generateMachineName() below.
    $filename = $arguments['filename'];
    $this->wxrFile = $filename;
    $this->blog = wordpress_migrate_blog($filename);
    parent::__construct(MigrateGroup::getInstance($this->blog->getTitle()));
  }

  /**
   * Construct the machine name from the blog title
   */
  protected function generateMachineName($class_name = NULL) {
    if (!$class_name) {
      $class_name = get_class($this);
    }

    // The machine name is the cleansed blog title, followed by the portion
    // of the class name after WordPress. For example, for
    // category migration (class WordPressCategory) of "Mike's Blog",
    // the generated machine name will be MikesBlogCategory.
    return $this->blog->machineName($class_name);
  }

  /**
   * Called after completion of each migration.
   */
  public function postImport() {
    // Clear ignored rows from the map, so as not to confuse reporting.
    $map_table = $this->map->getMapTable();
    db_delete($map_table)
      ->condition('needs_update', MigrateMap::STATUS_IGNORED)
      ->execute();
  }


  /**
   * Outputs a progress message, reflecting the current status of a migration process.
   *
   * @param int $result
   *  Status of the process, represented by one of the Migration::RESULT_* constants.
   */
  protected function progressMessage($result) {
    $time = microtime(TRUE) - $this->lastfeedback;
    if ($time > 0) {
      $perminute = round(60*$this->processed_since_feedback/$time);
      $time = round($time, 1);
    }
    else {
      $perminute = '?';
    }

    if ($this->status == Migration::STATUS_IMPORTING) {
      switch ($result) {
        case Migration::RESULT_COMPLETED:
          $basetext = "Imported !numitems in !time sec (!perminute/min) - done with '!name'";
          $type = 'completed';
          break;
        case Migration::RESULT_FAILED:
          $basetext = "Imported !numitems in !time sec (!perminute/min) - failure with '!name'";
          $type = 'failed';
          break;
        case Migration::RESULT_INCOMPLETE:
          $basetext = "Imported !numitems in !time sec (!perminute/min) - continuing with '!name'";
          $type = 'ok';
          break;
        case Migration::RESULT_STOPPED:
          $basetext = "Imported !numitems in !time sec (!perminute/min) - stopped '!name'";
          $type = 'warning';
          break;
      }
      $numitems = $this->destination->getCreated();
    }
    else {
      switch ($result) {
        case Migration::RESULT_COMPLETED:
          $basetext = "Rolled back !numitems in !time sec (!perminute/min) - done with '!name'";
          $type = 'completed';
          break;
        case Migration::RESULT_FAILED:
          $basetext = "Rolled back !numitems in !time sec (!perminute/min) - failure with '!name'";
          $type = 'failed';
          break;
        case Migration::RESULT_INCOMPLETE:
          $basetext = "Rolled back !numitems in !time sec (!perminute/min) - continuing with '!name'";
          $type = 'ok';
          break;
        case Migration::RESULT_STOPPED:
          $basetext = "Rolled back !numitems in !time sec (!perminute/min) - stopped '!name'";
          $type = 'warning';
          break;
      }
      $numitems = $this->processed_since_feedback + $this->source->getIgnored();
    }

    $message = t($basetext,
        array('!numitems' => $numitems,
              '!time' => $time,
              '!perminute' => $perminute,
              '!name' => $this->machineName));
    self::displayMessage($message, $type);

    if ($result == Migration::RESULT_INCOMPLETE) {
      $this->lastfeedback = time();
      $this->processed_since_feedback = $this->successes_since_feedback = 0;
      $this->source->resetStats();
      $this->destination->resetStats();
    }
  }
}

class WordPressBlog {
  protected $filename;
  public function getFilename() {
    return $this->filename;
  }
  protected $wxrVersion = '1.0';
  public function getWxrVersion() {
    return $this->wxrVersion;
  }
  protected $title;
  public function getTitle() {
    return $this->title;
  }
  protected $blog_url;
  public function getBlogUrl() {
    return $this->blog_url;
  }
  protected $link;
  public function getLink() {
    return $this->link;
  }
  protected $uid;
  public function getUid() {
    return $this->uid;
  }

  protected $migrations = array();

  public function __construct($filename) {
    $this->filename = $filename;
    $row = db_select('wordpress_migrate', 'wm')
           ->fields('wm', array('filename', 'title', 'blog_url', 'uid', 'link', 'wxr_version'))
           ->condition('filename', $filename)
           ->execute()
           ->fetchObject();
    if ($row) {
      $this->title = $row->title;
      $this->blog_url = $row->blog_url;
      $this->uid = $row->uid;
      $this->link = $row->link;
      $this->wxrVersion = $row->wxr_version;
    }
    else {
      // Suppress errors during parsing, so we can pick them up after
      libxml_use_internal_errors(TRUE);

      $reader = new XMLReader;
      $status = $reader->open($this->filename);
      if ($status) {
        $title = $this->blog_url = '';
        while ($reader->read()) {
          if ($reader->nodeType == XMLREADER::ELEMENT) {
            switch ($reader->name) {
              case 'title':
                $title = $reader->readString();
                break;
              case 'wp:wxr_version':
                $this->wxrVersion = $reader->readString();
                break;
              case 'wp:base_blog_url':
                $this->blog_url = $reader->readString();
                break;
              case 'link':
                $this->link = $reader->readString();
                break;
            }
          }
          if (!empty($title) && !empty($this->blog_url) && !empty($this->link)) {
            break;
          }
        }
        // Validate that it really is a WXR file
        if (empty($this->blog_url)) {
          throw new Exception(t('The uploaded file is not a valid WordPress export'));
        }
        // Keep only alphabetic characters
        $this->title = preg_replace('/[^A-Za-z]/', '', $title);
        if (!$this->title) {
          $this->title = preg_replace('/[^A-Za-z]/', '', $this->blog_url);
        }

        global $user;
        $this->uid = $user->uid;
        db_insert('wordpress_migrate')
          ->fields(array(
            'filename' => $filename,
            'title' => $this->title,
            'blog_url' => $this->blog_url,
            'uid' => $this->uid,
            'link' => $this->link,
            'wxr_version' => $this->wxrVersion,
          ))
          ->execute();
        foreach ($this->migrationClasses() as $class) {
          // Skip authors with WXR 1.0
          if ($class == 'WordPressAuthor' && $this->wxrVersion == '1.0') {
            continue;
          }
          // Skip comments if comment module is not enabled
          if ($class == 'WordPressComment' && !module_exists('comment')) {
            continue;
          }
          // Skip tags/categories if taxonomy is not enabled
          if ($class == 'WordPressTag' || $class == 'WordPressCategory') {
            if (!module_exists('taxonomy')) {
              continue;
            }
          }
          // Skip tags/categories if there's no destination vocabulary
          if ($class == 'WordPressTag' && !variable_get('wordpress_migrate_tag_vocabulary', '') ||
              $class == 'WordPressCategory' && !variable_get('wordpress_migrate_category_vocabulary', '')) {
            continue;
          }
          Migration::registerMigration($class, $this->machineName($class), array('filename' => $filename));
        }
      }
      else {
        throw new Exception(t('Could not open XML file !url',
                              array('!url' => $this->filename)));
      }
    }
  }

  public function machineName($class_name) {
    // If the default classes have been overridden, $class_name might be either
    // the default class name, or the name of the overridden class. Check first
    // for the former case, then the latter
    $classes = $this->migrationClasses();
    if (!isset($classes[$class_name])) {
      $flipped = array_flip($classes);
      $class_name = $flipped[$class_name];
    }
    return $this->title . substr($class_name, strlen('WordPress'),
      strlen($class_name) - strlen('WordPress'));
  }

  /**
   * The implemented WordPress migrations, in the order they should be run.
   */
  public function migrationClasses() {
    return array(
      'WordPressAuthor' => 'WordPressAuthor',
      'WordPressCategory' => 'WordPressCategory',
      'WordPressTag' => 'WordPressTag',
      'WordPressBlogEntry' => 'WordPressBlogEntry',
      'WordPressPage' => 'WordPressPage',
      'WordPressAttachment' => 'WordPressAttachment',
      'WordPressComment' => 'WordPressComment',
    );
  }

  public function migrations() {
    if (empty($this->migrations)) {
      $this->migrations = array();
      foreach ($this->migrationClasses() as $base_class => $actual_class) {
        // Skip authors with WXR 1.0
        if ($base_class == 'WordPressAuthor' && $this->wxrVersion == '1.0') {
          continue;
        }
        // Skip comments if comment module is not enabled
        if ($base_class == 'WordPressComment' && !module_exists('comment')) {
          continue;
        }
        // Skip tags/categories if taxonomy is not enabled
        if ($base_class == 'WordPressTag' || $base_class == 'WordPressCategory') {
          if (!module_exists('taxonomy')) {
            continue;
          }
        }
        // Skip tags/categories if there's no destination vocabulary
        if ($base_class == 'WordPressTag' && !variable_get('wordpress_migrate_tag_vocabulary', '') ||
            $base_class == 'WordPressCategory' && !variable_get('wordpress_migrate_category_vocabulary', '')) {
          continue;
        }
        $this->migrations[$actual_class] = MigrationBase::getInstance($this->machineName($actual_class), $actual_class,
          array('filename' => $this->filename));
      }
    }
    return $this->migrations;
  }

  static public function blogs() {
    $blogs = array();
    $result = db_select('wordpress_migrate', 'wm')
               ->fields('wm', array('filename'))
               ->execute();
    foreach ($result as $row) {
      $blogs[] = wordpress_migrate_blog($row->filename);
    }
    return $blogs;
  }
}
