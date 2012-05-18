<?php
/**
 * @file
 * rmo_etc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rmo_etc_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rmo_etc_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rmo_etc_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => t('A committee to work on a project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'committee_post' => array(
      'name' => t('Committee Post'),
      'base' => 'node_content',
      'description' => t('Post a message in a committee.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'monthly_meeting' => array(
      'name' => t('Monthly Meeting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'practice_notes' => array(
      'name' => t('Practice Notes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'song' => array(
      'name' => t('Song'),
      'base' => 'node_content',
      'description' => t('A song in our repertoire. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
