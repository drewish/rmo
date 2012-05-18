<?php
/**
 * @file
 * rmo_etc.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rmo_etc_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arranger|node|song|default';
  $field_group->group_name = 'group_arranger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arranger',
    'weight' => '4',
    'children' => array(
      0 => 'field_arrangement_file',
      1 => 'field_midi',
      2 => 'field_song_original_file',
      3 => 'field_song_sheet_music',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_arranger|node|song|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arranger|node|song|form';
  $field_group->group_name = 'group_arranger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arranger',
    'weight' => '4',
    'children' => array(
      0 => 'field_arrangement_file',
      1 => 'field_midi',
      2 => 'field_song_original_file',
      3 => 'field_song_sheet_music',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_arranger|node|song|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arranger|node|song|teaser';
  $field_group->group_name = 'group_arranger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arranger',
    'weight' => '4',
    'children' => array(
      0 => 'field_arrangement_file',
      1 => 'field_midi',
      2 => 'field_song_original_file',
      3 => 'field_song_sheet_music',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_arranger|node|song|teaser'] = $field_group;

  return $export;
}
