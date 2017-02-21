<?php
/**
 * @file
 * ca_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ca_staff content'.
  $permissions['create ca_staff content'] = array(
    'name' => 'create ca_staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ca_staff content'.
  $permissions['delete any ca_staff content'] = array(
    'name' => 'delete any ca_staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ca_staff content'.
  $permissions['delete own ca_staff content'] = array(
    'name' => 'delete own ca_staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ca_staff content'.
  $permissions['edit any ca_staff content'] = array(
    'name' => 'edit any ca_staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ca_staff content'.
  $permissions['edit own ca_staff content'] = array(
    'name' => 'edit own ca_staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
