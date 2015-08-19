<?php
/**
 * @file
 * ca_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_staff_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_staff_image_default_styles() {
  $styles = array();

  // Exported image style: staff_portrait_thumb.
  $styles['staff_portrait_thumb'] = array(
    'label' => 'staff portrait thumb',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_default_portrait',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 45,
          'height' => 60,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: staff_square_thumb.
  $styles['staff_square_thumb'] = array(
    'label' => 'staff square thumb',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_default_square',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 45,
          'height' => 45,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ca_staff_node_info() {
  $items = array(
    'ca_staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_staff_weight_features_default_settings() {
  $settings = array();

  $settings['ca_staff'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
