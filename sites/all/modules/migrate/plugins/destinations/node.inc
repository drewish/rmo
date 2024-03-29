<?php

/**
 * @file
 * Support for node destinations.
 */

// TODO:
// Make sure this works with updates, explicit destination keys

/**
 * Destination class implementing migration into nodes.
 */
class MigrateDestinationNode extends MigrateDestinationEntity {
  static public function getKeySchema() {
    return array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'description' => 'ID of destination node',
      ),
    );
  }

  /**
   * Return an options array for node destinations.
   *
   * @param string $language
   *  Default language for nodes created via this destination class.
   * @param string $text_format
   *  Default text format for nodes created via this destination class.
   */
  static public function options($language, $text_format) {
    return compact('language', 'text_format');
  }

  /**
   * Basic initialization
   *
   * @param string $bundle
   *  A.k.a. the content type (page, article, etc.) of the node.
   * @param array $options
   *  Options applied to nodes.
   */
  public function __construct($bundle, array $options = array()) {
    parent::__construct('node', $bundle, $options);
  }

  /**
   * Returns a list of fields available to be mapped for the node type (bundle)
   *
   * @param Migration $migration
   *  Optionally, the migration containing this destination.
   * @return array
   *  Keys: machine names of the fields (to be passed to addFieldMapping)
   *  Values: Human-friendly descriptions of the fields.
   */
  public function fields($migration = NULL) {
    $fields = array();
    // First the core (node table) properties
    $fields['nid'] = t('Node: <a href="@doc">Existing node ID</a>',
                array('@doc' => 'http://drupal.org/node/1349696#nid'));
    $node_type = node_type_load($this->bundle);
    if ($node_type->has_title) {
      $fields['title'] = t('Node: <a href="@doc">',
                           array('@doc' => 'http://drupal.org/node/1349696#title'))
                         . $node_type->title_label . '</a>';
    }
    $fields['uid'] = t('Node: <a href="@doc">Authored by (uid)</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#uid'));
    $fields['created'] = t('Node: <a href="@doc">Created timestamp</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#created'));
    $fields['changed'] = t('Node: <a href="@doc">Modified timestamp</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#changed'));
    $fields['status'] = t('Node: <a href="@doc">Published</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#status'));
    $fields['promote'] = t('Node: <a href="@doc">Promoted to front page</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#promote'));
    $fields['sticky'] = t('Node: <a href="@doc">Sticky at top of lists</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#sticky'));
    $fields['revision'] = t('Node: <a href="@doc">Create new revision</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#revision'));
    $fields['log'] = t('Node: <a href="@doc">Revision Log message</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#log'));
    $fields['language'] = t('Node: <a href="@doc">Language (fr, en, ...)</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#language'));
    $fields['tnid'] = t('Node: <a href="@doc">The translation set id for this node</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#tnid'));
    $fields['translate'] = t('Node: <a href="@doc">A boolean indicating whether this translation page needs to be updated</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#translate'));
    $fields['revision_uid'] = t('Node: <a href="@doc">Modified (uid)</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#revision_uid'));
    $fields['is_new'] = t('Option: <a href="@doc">Indicates a new node with the specified nid should be created</a>',
                    array('@doc' => 'http://drupal.org/node/1349696#is_new'));

    // Then add in anything provided by handlers
    $fields += migrate_handler_invoke_all('Entity', 'fields', $this->entityType, $this->bundle, $migration);
    $fields += migrate_handler_invoke_all('Node', 'fields', $this->entityType, $this->bundle, $migration);

    return $fields;
  }

  /**
   * Delete a batch of nodes at once.
   *
   * @param $nids
   *  Array of node IDs to be deleted.
   */
  public function bulkRollback(array $nids) {
    migrate_instrument_start('node_delete_multiple');
    $this->prepareRollback($nids);
    node_delete_multiple($nids);
    $this->completeRollback($nids);
    migrate_instrument_stop('node_delete_multiple');
  }

  /**
   * Import a single node.
   *
   * @param $node
   *  Node object to build. Prefilled with any fields mapped in the Migration.
   * @param $row
   *  Raw source data object - passed through to prepare/complete handlers.
   * @return array
   *  Array of key fields (nid only in this case) of the node that was saved if
   *  successful. FALSE on failure.
   */
  public function import(stdClass $node, stdClass $row) {
    // Updating previously-migrated content?
    $migration = Migration::currentMigration();
    if (isset($row->migrate_map_destid1)) {
      // Make sure is_new is off
      $node->is_new = FALSE;
      if (isset($node->nid)) {
        if ($node->nid != $row->migrate_map_destid1) {
          throw new MigrateException(t("Incoming nid !nid and map destination nid !destid1 don't match",
            array('!nid' => $node->nid, '!destid1' => $row->migrate_map_destid1)));
        }
      }
      else {
        $node->nid = $row->migrate_map_destid1;
      }
      // Get the existing vid, tnid so updates don't generate notices
      $values = db_select('node', 'n')
                ->fields('n', array('vid', 'tnid'))
                ->condition('nid', $node->nid)
                ->execute()
                ->fetchAssoc();
      if (empty($values)) {
        throw new MigrateException(t("Incoming node ID !nid no longer exists",
                    array('!nid' => $node->nid)));
      }
      $node->vid = $values['vid'];
      if (empty($row->tnid)) {
        $node->tnid = $values['tnid'];
      }
    }
    if ($migration->getSystemOfRecord() == Migration::DESTINATION) {
      if (!isset($node->nid)) {
        throw new MigrateException(t('System-of-record is DESTINATION, but no destination nid provided'));
      }
      $old_node = node_load($node->nid);
      if (empty($old_node)) {
        throw new MigrateException(t('System-of-record is DESTINATION, but node !nid does not exist',
                                   array('!nid' => $node->nid)));
      }
      if (!isset($node->created)) {
        $node->created = $old_node->created;
      }
      if (!isset($node->vid)) {
        $node->vid = $old_node->vid;
      }
      if (!isset($node->status)) {
        $node->status = $old_node->status;
      }
      if (!isset($node->uid)) {
        $node->uid = $old_node->uid;
      }
    }
    elseif (!isset($node->type)) {
      // Default the type to our designated destination bundle (by doing this
      // conditionally, we permit some flexibility in terms of implementing
      // migrations which can affect more than one type).
      $node->type = $this->bundle;
    }

    // Set some required properties.

    if ($migration->getSystemOfRecord() == Migration::SOURCE) {
      if (!isset($node->language)) {
        $node->language = $this->language;
      }

      // Apply defaults, allow standard node prepare hooks to fire.
      // node_object_prepare() will blow these away, so save them here and
      // stuff them in later if need be.
      if (isset($node->created)) {
        $created = MigrationBase::timestamp($node->created);
      }
      else {
        // To keep node_object_prepare() from choking
        $node->created = REQUEST_TIME;
      }
      if (isset($node->changed)) {
        $changed = MigrationBase::timestamp($node->changed);
      }
      if (isset($node->uid)) {
        $uid = $node->uid;
      }
      node_object_prepare($node);
      if (isset($created)) {
        $node->created = $created;
      }
      // No point to resetting $node->changed here, node_save() will overwrite it
      if (isset($uid)) {
        $node->uid = $uid;
      }
    }

    // Invoke migration prepare handlers
    $this->prepare($node, $row);

    if (!isset($node->revision)) {
      $node->revision = 0; // Saves disk space and writes. Can be overridden.
    }

    // Trying to update an existing node
    if ($migration->getSystemOfRecord() == Migration::DESTINATION) {
      // Incoming data overrides existing data, so only copy non-existent fields
      foreach ($old_node as $field => $value) {
        // An explicit NULL in the source data means to wipe to old value (i.e.,
        // don't copy it over from $old_node)
        if (property_exists($node, $field) && $node->$field === NULL) {
          // Ignore this field
        }
        elseif (!isset($node->$field)) {
          $node->$field = $old_node->$field;
        }
      }
    }

    if (isset($node->nid) && !(isset($node->is_new) && $node->is_new)) {
      $updating = TRUE;
    }
    else {
      $updating = FALSE;
    }

    migrate_instrument_start('node_save');
    node_save($node);
    migrate_instrument_stop('node_save');

    if (isset($node->nid)) {
      if ($updating) {
        $this->numUpdated++;
      }
      else {
        $this->numCreated++;
      }

      // Unfortunately, http://drupal.org/node/722688 was not accepted, so fix
      // the changed timestamp
      if (isset($changed)) {
        db_update('node')
          ->fields(array('changed' => $changed))
          ->condition('nid', $node->nid)
          ->execute();
        $node->changed = $changed;
      }

      // Potentially fix uid and timestamp in node_revisions.
      $query = db_update('node_revision')
               ->condition('vid', $node->vid);
      if (isset($changed)) {
        $fields['timestamp'] = $changed;
      }
      $revision_uid = isset($node->revision_uid) ? $node->revision_uid : $node->uid;
      if ($revision_uid != $GLOBALS['user']->uid) {
        $fields['uid'] = $revision_uid;
      }
      if (!empty($fields)) {
        // We actually have something to update.
        $query->fields($fields);
        $query->execute();
        if (isset($changed)) {
          $node->timestamp = $changed;
        }
      }
      $return = array($node->nid);
    }
    else {
      $return = FALSE;
    }

    $this->complete($node, $row);
    return $return;
  }
}
