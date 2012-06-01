<?php
/**
 * @file
 * rmo_etc.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function rmo_etc_field_default_fields() {
  $fields = array();

  // Exported field: 'node-committee-field_description'
  $fields['node-committee-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'committee',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_description][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '-2',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-committee-group_group'
  $fields['node-committee-group_group'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_group',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Not a group',
          1 => 'Group',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'committee',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => 'Determine if this is an OG group.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'og_ui',
          'settings' => array(
            'field_name' => FALSE,
          ),
          'type' => 'og_group_subscribe',
          'weight' => -1,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'display_label' => 1,
      'entity_type' => 'node',
      'field_name' => 'group_group',
      'label' => 'Group',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_group_subscribe',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_group_subscribe',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-committee-og_description'
  $fields['node-committee-og_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'og_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'committee',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is description of the group.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'og_description',
      'label' => 'Group description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'node-committee-og_roles_permissions'
  $fields['node-committee-og_roles_permissions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'og_roles_permissions',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Use default roles and permissions',
          1 => 'Override default roles and permissions',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'committee',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'og_roles_permissions',
      'label' => 'Group roles and permissions',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'list_default',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'list_default',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 32,
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-committee_post-body'
  $fields['node-committee_post-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'committee_post',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Post a message in a committee.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'trim_length' => 600,
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-committee_post-og_group_ref'
  $fields['node-committee_post-og_group_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'og_group_ref',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'og',
        'handler_settings' => array(
          'behaviors' => array(
            'og_behavior' => array(
              'status' => TRUE,
            ),
          ),
          'membership_type' => 'og_membership_type_default',
          'primary_field' => FALSE,
          'reference_type' => 'my_groups',
          'target_bundles' => array(),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'committee_post',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'og_ui',
          'settings' => array(),
          'type' => 'og_list_default',
          'weight' => 1,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'og_group_ref',
      'label' => 'Groups audience - Node',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_list_default',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_list_default',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'node-monthly_meeting-field_agenda'
  $fields['node-monthly_meeting-field_agenda'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_agenda',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'monthly_meeting',
    ),
    'field_instance' => array(
      'bundle' => 'monthly_meeting',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_agenda][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_agenda',
      'label' => 'Agenda',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '4',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '8',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-monthly_meeting-field_date'
  $fields['node-monthly_meeting-field_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datetime',
      'type_name' => 'practice_notes',
    ),
    'field_instance' => array(
      'bundle' => 'monthly_meeting',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date',
      'label' => 'Date',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '1',
      'widget' => array(
        'active' => '1',
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'increment' => '1',
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => '',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_select',
        'weight' => '1',
      ),
      'widget_type' => 'date_select',
    ),
  );

  // Exported field: 'node-monthly_meeting-field_facilitator'
  $fields['node-monthly_meeting-field_facilitator'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_facilitator',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'practice_notes',
    ),
    'field_instance' => array(
      'bundle' => 'monthly_meeting',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_facilitator][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_facilitator',
      'label' => 'Facilitator(s)',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-monthly_meeting-field_location'
  $fields['node-monthly_meeting-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'monthly_meeting',
    ),
    'field_instance' => array(
      'bundle' => 'monthly_meeting',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '3',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-monthly_meeting-field_meeting_minutes'
  $fields['node-monthly_meeting-field_meeting_minutes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_meeting_minutes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'monthly_meeting',
    ),
    'field_instance' => array(
      'bundle' => 'monthly_meeting',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_meeting_minutes][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_meeting_minutes',
      'label' => 'Minutes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '5',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '15',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-practice_notes-field_date'
  $fields['node-practice_notes-field_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datetime',
      'type_name' => 'practice_notes',
    ),
    'field_instance' => array(
      'bundle' => 'practice_notes',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date',
      'label' => 'Date',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '1',
      'widget' => array(
        'active' => '1',
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'increment' => '1',
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => '',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_select',
        'weight' => '1',
      ),
      'widget_type' => 'date_select',
    ),
  );

  // Exported field: 'node-practice_notes-field_facilitator'
  $fields['node-practice_notes-field_facilitator'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_facilitator',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'practice_notes',
    ),
    'field_instance' => array(
      'bundle' => 'practice_notes',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_facilitator][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_facilitator',
      'label' => 'Facilitator(s)',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-practice_notes-field_practicenotes'
  $fields['node-practice_notes-field_practicenotes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_practicenotes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'practice_notes',
    ),
    'field_instance' => array(
      'bundle' => 'practice_notes',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_practicenotes][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_practicenotes',
      'label' => 'Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '4',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '15',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-song-field_arrangement_file'
  $fields['node-song-field_arrangement_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_arrangement_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '1',
        'display_default' => 1,
        'display_field' => '1',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'This is the file used to generate all the sheet music. Uploading it here will make it easy for arrangers to make changes later on.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'rss' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'search_index' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'search_result' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'token' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_arrangement_file',
      'label' => 'Arrangement File',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'songs/arrangement',
        'file_extensions' => 'mus',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '6',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '6',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-song-field_choreography_notes'
  $fields['node-song-field_choreography_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_choreography_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_choreography_notes][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_choreography_notes',
      'label' => 'Choreography Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '6',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-song-field_description'
  $fields['node-song-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_description][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_trimmed',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '1',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-song-field_midi'
  $fields['node-song-field_midi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_midi',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '0',
        'display_default' => 1,
        'display_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'rss' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'search_index' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'search_result' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'token' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_midi',
      'label' => 'MIDI',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'songs/midi',
        'file_extensions' => 'mid midi mp3',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '7',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '7',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-song-field_notes'
  $fields['node-song-field_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_notes',
      'label' => 'Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '5',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-song-field_song_audio'
  $fields['node-song-field_song_audio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_song_audio',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '1',
        'display_default' => 1,
        'display_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'mediaelement',
          'settings' => array(
            'controls' => TRUE,
            'download_link' => FALSE,
            'download_text' => 'Download',
            'height' => '30',
            'preload' => 'auto',
            'width' => '300',
          ),
          'type' => 'mediaelement_audio',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_song_audio',
      'label' => 'Listen',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'songs/listen',
        'file_extensions' => 'mp3 m4a',
        'max_filesize' => '6M',
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'filefield_source_attach_absolute' => '0',
          'filefield_source_attach_mode' => 'move',
          'filefield_source_attach_path' => 'file_attach',
          'filefield_source_autocomplete' => '0',
          'filefield_sources' => array(
            'attach' => 0,
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '0',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-song-field_song_original_file'
  $fields['node-song-field_song_original_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_song_original_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '1',
        'display_default' => 1,
        'display_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'If the song is a cover you can upload a copy of the original so people know how it should sound.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'mediaelement',
          'settings' => array(
            'controls' => TRUE,
            'download_link' => FALSE,
            'download_text' => 'Download',
            'height' => '30',
            'preload' => 'auto',
            'width' => '300',
          ),
          'type' => 'mediaelement_audio',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'rss' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_song_original_file',
      'label' => 'Original Song',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'songs/original',
        'file_extensions' => 'mp3',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '5',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '5',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-song-field_song_sheet_music'
  $fields['node-song-field_song_sheet_music'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_song_sheet_music',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '1',
        'display_default' => 1,
        'display_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'This is for the sheet music. Add a new file for each instrument and be sure to enter the instrument type or key in the description field.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'rss' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'search_index' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'token' => array(
          'label' => 'above',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_song_sheet_music',
      'label' => 'Sheet Music',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'songs/sheet_music',
        'file_extensions' => 'pdf jpg png txt tif',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '8',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'filefield_source_attach_absolute' => '0',
          'filefield_source_attach_mode' => 'move',
          'filefield_source_attach_path' => 'file_attach',
          'filefield_source_autocomplete' => '0',
          'filefield_sources' => array(
            'attach' => 0,
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '8',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-song-field_song_source'
  $fields['node-song-field_song_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_song_source',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_song_source][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_song_source',
      'label' => 'Source',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '3',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-song-field_song_status'
  $fields['node-song-field_song_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_song_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'new' => 'In development',
          'active' => 'A-list',
          'infrequent' => 'B-list',
          'dead' => 'Mothballed',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'song',
    ),
    'field_instance' => array(
      'bundle' => 'song',
      'default_value' => array(
        0 => array(
          'value' => 'new',
        ),
      ),
      'deleted' => '0',
      'description' => 'Where in the lifecycle is this song?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_song_status',
      'label' => 'Status',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
        ),
        'type' => 'options_select',
        'weight' => '2',
      ),
      'widget_type' => 'optionwidgets_select',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Arrangement File');
  t('Body');
  t('Choreography Notes');
  t('Date');
  t('Description');
  t('Determine if this is an OG group.');
  t('Facilitator(s)');
  t('Group');
  t('Group description');
  t('Group roles and permissions');
  t('Groups audience - Node');
  t('If the song is a cover you can upload a copy of the original so people know how it should sound.');
  t('Listen');
  t('Location');
  t('MIDI');
  t('Minutes');
  t('Notes');
  t('Original Song');
  t('Post a message in a committee.');
  t('Sheet Music');
  t('Source');
  t('Status');
  t('This is description of the group.');
  t('This is for the sheet music. Add a new file for each instrument and be sure to enter the instrument type or key in the description field.');
  t('This is the file used to generate all the sheet music. Uploading it here will make it easy for arrangers to make changes later on.');
  t('Where in the lifecycle is this song?');

  return $fields;
}
