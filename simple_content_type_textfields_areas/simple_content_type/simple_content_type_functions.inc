<?php

/**
 * @file simple_content_type_functions.inc
 * Supporting functions for the Simple Content Type module
 */
/**
 * Associative array of fields to add
 */
function _simple_content_type_installed_fields()  {
  // checkboxes
  $fields['simple_content_type_textfield'] = array(
    'field_name' => 'simple_content_type_textfield',
    'label' => t('A Textfield'),
    'type' => 'text',
	'module' => 'text',
  );
  // Solution
  $fields['simple_content_type_textarea'] = array(
    'field_name' => 'simple_content_type_textarea',
    'label' => t('A Textarea'),
    'type' => 'text_long',
    'module' => 'text',
    'translatable' => '1',
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
  );
  $fields['simple_content_type_txtarea_fltr'] = array(
    'field_name' => 'simple_content_type_txtarea_fltr',
    'label' => t('A Textarea with format filters'),
    'type' => 'text_long',
    'module' => 'text',
    'translatable' => '1',
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
  );
  
  return $fields;
}
/**
 * Associative array of field instance settings
 */
function _simple_content_type_installed_instances()  {
  // textfield
  $instances['simple_content_type_textfield'] = array(
    'field_name' => 'simple_content_type_textfield',
    'type' => 'text',
    'label' => t('A Textfield'),
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => '-1',
	  'settings' => array(
        'size' => '20',
		'max_length' => '100',
      ),
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
    ),
  );
  // textarea
  $instances['simple_content_type_textarea'] = array(
    'field_name' => 'simple_content_type_textarea',
    'type' => 'text_long',
    'label' => t('A Textarea'),
    'widget' => array(
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
  );
  // textarea
  $instances['simple_content_type_txtarea_fltr'] = array(
    'field_name' => 'simple_content_type_txtarea_fltr',
    'type' => 'text_long',
    'label' => t('A Textarea with format filters'),
    'widget' => array(
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
  );
  
  return $instances;
}
