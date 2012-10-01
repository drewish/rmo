<?php
/**
 * @file
 * rmo_merch.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rmo_merch_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rmo_merch_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Merch that we sell.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
