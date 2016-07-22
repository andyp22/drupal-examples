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
    'label' => t('Simple Textfield'),
  'required' => 1,
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
  
  return $instances;
}
