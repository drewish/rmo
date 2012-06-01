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
  $view->name = 'album_tracks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Album tracks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'filename' => 'filename',
    'field_title' => 'field_title',
    'field_track' => 'field_track',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'filename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = 0;
  /* Field: File: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_track']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_track']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_track']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_track']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_track']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_track']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_track']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_track']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_track']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_track']['field_api_classes'] = 0;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Play';
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'media_preview';
  /* Sort criterion: File: Track (field_track) */
  $handler->display->display_options['sorts']['field_track_value']['id'] = 'field_track_value';
  $handler->display->display_options['sorts']['field_track_value']['table'] = 'field_data_field_track';
  $handler->display->display_options['sorts']['field_track_value']['field'] = 'field_track_value';
  /* Contextual filter: File: Album (field_album) */
  $handler->display->display_options['arguments']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['arguments']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_album_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_album_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_album_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_album_target_id']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_album_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_album_target_id']['validate_options']['types'] = array(
    'album' => 'album',
  );
  $handler->display->display_options['arguments']['field_album_target_id']['validate_options']['access'] = '1';
  $handler->display->display_options['arguments']['field_album_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_album_target_id']['not'] = 0;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'album',
  );
  $export['album_tracks'] = $view;

  $view = new view;
  $view->name = 'albums';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Albums';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Albums';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Released (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'album' => 'album',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'albums';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Albums';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['albums'] = $view;

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
