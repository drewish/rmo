<?php
/**
 * @file
 * rmo_etc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rmo_etc_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'monthly_meetings';
  $view->description = 'Listing of monthly meetings';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = '0';
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'monthly_meeting' => 'monthly_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'meetings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Meetings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $export['monthly_meetings'] = $view;

  $view = new view;
  $view->name = 'music';
  $view->description = 'Listing of music';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Music';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The RMO has a long history and lots of music to prove it. Since it would be overwhelming to keep this much amazing music in our heads at once we group the songs based on how frequently they\'re played. The A-list gets the most plays, B-list comes out when the song would fit a specific occasion, and the mothballed songs are those we no longer play but other bands might be interested in. ';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Listen */
  $handler->display->display_options['fields']['field_song_audio']['id'] = 'field_song_audio';
  $handler->display->display_options['fields']['field_song_audio']['table'] = 'field_data_field_song_audio';
  $handler->display->display_options['fields']['field_song_audio']['field'] = 'field_song_audio';
  $handler->display->display_options['fields']['field_song_audio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_song_audio']['type'] = 'mediaelement_audio';
  $handler->display->display_options['fields']['field_song_audio']['settings'] = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
    'preload' => 'metadata',
  );
  $handler->display->display_options['fields']['field_song_audio']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_song_audio']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_song_audio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_song_audio']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_song_audio']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'song' => 'song',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_song_status) */
  $handler->display->display_options['filters']['field_song_status_value']['id'] = 'field_song_status_value';
  $handler->display->display_options['filters']['field_song_status_value']['table'] = 'field_data_field_song_status';
  $handler->display->display_options['filters']['field_song_status_value']['field'] = 'field_song_status_value';
  $handler->display->display_options['filters']['field_song_status_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_song_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_song_status_value']['expose']['operator_id'] = 'field_song_status_value_op';
  $handler->display->display_options['filters']['field_song_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_song_status_value']['expose']['operator'] = 'field_song_status_value_op';
  $handler->display->display_options['filters']['field_song_status_value']['expose']['identifier'] = 'field_song_status_value';
  $handler->display->display_options['filters']['field_song_status_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_song_status_value']['expose']['reduce'] = 0;

  /* Display: Page - All */
  $handler = $view->new_display('page', 'Page - All', 'page_5');
  $handler->display->display_options['path'] = 'songs-we-play';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Music';
  $handler->display->display_options['menu']['description'] = 'The songs we play';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $export['music'] = $view;

  $view = new view;
  $view->name = 'practice_notes';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'practice_notes' => 'practice_notes',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'practice-notes';
  $export['practice_notes'] = $view;

  return $export;
}
