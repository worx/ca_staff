<?php

/**
 * @file
 * Plugin to provide access control based upon ca_staff admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Staff: Display Type'),
  'description' => t('Control access by staff list type.'),
  'callback' => 'ca_staff_display_access_check',
  'settings form' => 'ca_staff_display_access_settings',
  'settings form submit' => 'ca_staff_display_access_settings_submit',
  'summary' => 'ca_staff_display_access_summary',
);

/**
 * Settings form for the 'by staff list type' access plugin.
 */
function ca_staff_display_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_staff_display'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s display type'),
    '#options' => array(
      'ca_staff_display_square' => t('Display Square'),
      'ca_staff_display_one_flex' => t('Display Portrait'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_staff_display'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_staff_display_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_staff_display_access_check($conf, $context) {
  return $conf['ca_staff_display'] == variable_get('ca_staff_display', 'ca_staff_display_square');
}

/**
 * Provide a summary description based upon the checked staff list type.
 */
function ca_staff_display_access_summary($conf, $context) {
  switch ($conf['ca_staff_display']) {
    case 'ca_staff_display_square':
      $template = t('Display Square');
      break;
    case 'ca_staff_display_one_flex':
      $template = t('Display Portrait');
      break;
    
  return t('Display template is set to: ' . $template);
}
