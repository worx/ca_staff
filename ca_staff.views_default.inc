<?php
/**
 * @file
 * ca_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_staff_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );

  /* Display: CA Staff: Admin */
  $handler = $view->new_display('panel_pane', 'CA Staff: Admin', 'ca_staff_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ca_staff_s_image' => 'field_ca_staff_s_image',
    'field_ca_staff_s_title' => 'field_ca_staff_s_title',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ca_staff_s_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_staff_s_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_staff_admin'] = $view;

  $view = new view();
  $view->name = 'ca_staff_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming Soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'crop_default_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );

  /* Display: CA Staff: Grid View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Grid View Template One', 'ca_staff_grid_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Staff: Grid View Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Staff: List View Template Two */
  $handler = $view->new_display('panel_pane', 'CA Staff: List View Template Two', 'ca_staff_list_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'crop_default_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Staff: List View Template Two';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Staff: Flex View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Flex View Template One', 'ca_staff_flex_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Staff: Flex View Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'ca_staff_feed');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['path'] = 'staff/feed';
  $handler->display->display_options['displays'] = array(
    'ca_staff_grid_1' => 'ca_staff_grid_1',
    'ca_staff_list_2' => 'ca_staff_list_2',
    'default' => 0,
  );
  $export['ca_staff_list'] = $view;

  $view = new view();
  $view->name = 'ca_staff_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );

  /* Display: CA Staff: Node View Template One A */
  $handler = $view->new_display('panel_pane', 'CA Staff: Node View Template One A', 'ca_staff_node_1a');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'colorbox_node_style' => 'crop_default_square',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Staff: Node View Template One A';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Staff: Node View Template One B */
  $handler = $view->new_display('panel_pane', 'CA Staff: Node View Template One B', 'ca_staff_node_1b');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'colorbox_node_style' => 'crop_default_square_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Staff: Node View Template One B';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_staff_node'] = $view;

  $view = new view();
  $view->name = 'ca_staff_sort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );

  /* Display: CA Staff: Sort */
  $handler = $view->new_display('panel_pane', 'CA Staff: Sort', 'ca_staff_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'weight' => 'weight',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'crop_default_square_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_staff_sort'] = $view;

  return $export;
}
