<?php

/**
 * simple_content_type.admin.inc
 */
define('SIMPLE_CONTENT_TYPE_DEFAULT', t('Pangus'));
/**
 * Form builder; Create and display the Enspire Demo Admin configuration
 * settings form.
 */
function simple_content_type_configs_form($form, &$form_state)  {
  // Demo Page Title
  $form['simple_content_type_default_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Simple Textfield Default Value'),
    '#description' => t('This value is used to populate the Simple Textfield in a Simple Content Type node during node creation.'),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE,
    '#default_value' => variable_get('simple_content_type_default_text', SIMPLE_CONTENT_TYPE_DEFAULT),
  );
  
  return system_settings_form($form);
}

