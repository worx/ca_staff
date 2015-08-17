<?php

/** 
 * @file
 * CA_Staff admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_staff_settings_form() {
  $form = array();
  
  $form['ca_staff_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_staff_menu_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_staff_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_staff_panel_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_staff_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s list template'),
    '#options' => array(
      'ca_staff_list_template_one' => t('Template one'),
      'ca_staff_list_template_one_flex' => t('Template one Flex'),
      'ca_staff_list_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_staff_list_template', 'ca_staff_list_template_one'),
  );
  $form['ca_staff_display'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s display type'),
    '#options' => array(
      'ca_staff_display_square' => t('Display Square'),
      'ca_staff_display_portrait' => t('Display Portrait'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_staff_display', 'ca_staff_display_square'),
  );
  $form['ca_staff_grid_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Staff members per grid page'),
    '#default_value' => variable_get('ca_staff_grid_count', 16),
    '#required' => TRUE,
    '#description' => t('How many staff members would you like displayed per grid page? Suggested in groups for 4.'),
  );
  $form['ca_staff_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Staff members per list page'),
    '#default_value' => variable_get('ca_staff_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many staff members would you like displayed per list page?'),
  );
  
  return system_settings_form($form);
}

