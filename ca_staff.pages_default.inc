<?php
/**
 * @file
 * ca_staff.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_staff_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_staff_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Staff: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_staff' => 'ca_staff',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-node ca-staff-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5b98e1b9-0cbd-4b12-b470-178d098946c7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'ca_staff_node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_node-ca_staff_node_1a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $display->content['new-0a4b39ea-e773-4762-8a4e-50e4b386bd34'] = $pane;
  $display->panels['middle'][0] = 'new-0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $pane = new stdClass();
  $pane->pid = 'new-49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_node-ca_staff_node_1b';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $display->content['new-49d499fe-2dd9-4798-abe1-4b7a07f763e3'] = $pane;
  $display->panels['middle'][1] = 'new-49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $pane = new stdClass();
  $pane->pid = 'new-75b82b63-177e-4e57-97f7-aca461c9388b';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '75b82b63-177e-4e57-97f7-aca461c9388b';
  $display->content['new-75b82b63-177e-4e57-97f7-aca461c9388b'] = $pane;
  $display->panels['middle'][2] = 'new-75b82b63-177e-4e57-97f7-aca461c9388b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_staff_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_91e4513e-f482-4376-8365-75e5bc72d1da';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Staff: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_staff' => 'ca_staff',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-node ca-staff-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5b98e1b9-0cbd-4b12-b470-178d098946c7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_91e4513e-f482-4376-8365-75e5bc72d1da';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_node-ca_staff_node_1a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $display->content['new-0a4b39ea-e773-4762-8a4e-50e4b386bd34'] = $pane;
  $display->panels['first-first'][0] = 'new-0a4b39ea-e773-4762-8a4e-50e4b386bd34';
  $pane = new stdClass();
  $pane->pid = 'new-49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_node-ca_staff_node_1b';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $display->content['new-49d499fe-2dd9-4798-abe1-4b7a07f763e3'] = $pane;
  $display->panels['first-first'][1] = 'new-49d499fe-2dd9-4798-abe1-4b7a07f763e3';
  $pane = new stdClass();
  $pane->pid = 'new-75b82b63-177e-4e57-97f7-aca461c9388b';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '75b82b63-177e-4e57-97f7-aca461c9388b';
  $display->content['new-75b82b63-177e-4e57-97f7-aca461c9388b'] = $pane;
  $display->panels['first-first'][2] = 'new-75b82b63-177e-4e57-97f7-aca461c9388b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_91e4513e-f482-4376-8365-75e5bc72d1da'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_staff_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_staff';
  $page->task = 'page';
  $page->admin_title = 'CA Staff List';
  $page->admin_description = '';
  $page->path = 'staff/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Staff',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff__panel_context_3f04e2aa-d017-425c-b17a-0252055279b7';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Staff: Grid View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-list ca-staff-grid-4 ca-staff-list-template-1',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'ca_staff_display',
          'settings' => array(
            'ca_staff_display' => 'ca_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02d3fe70-0bee-4f9b-8bd6-17b938ee946a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff__panel_context_3f04e2aa-d017-425c-b17a-0252055279b7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_grid_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $display->content['new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e'] = $pane;
  $display->panels['first-first'][0] = 'new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff__panel_context_8a706af8-036b-412c-9e09-83934fa31ae2';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Staff: List View Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-list ca-staff-list-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_staff_display',
          'settings' => array(
            'ca_staff_display' => 'ca_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f82757d-5201-4e01-a98a-2a09cea7edca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff__panel_context_8a706af8-036b-412c-9e09-83934fa31ae2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ef2f14b-f965-475b-b344-2e590dce82e7';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_list_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ef2f14b-f965-475b-b344-2e590dce82e7';
  $display->content['new-8ef2f14b-f965-475b-b344-2e590dce82e7'] = $pane;
  $display->panels['first-first'][0] = 'new-8ef2f14b-f965-475b-b344-2e590dce82e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff__panel_context_f182125a-1941-4965-82d6-325c4a34510f';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Aurora Staff: Flex Grid View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-flex ca-staff-grid-4 ca-staff-flex-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_staff_display',
          'settings' => array(
            'ca_staff_display' => 'ca_staff_display_square',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02d3fe70-0bee-4f9b-8bd6-17b938ee946a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff__panel_context_f182125a-1941-4965-82d6-325c4a34510f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-94c9286d-72c0-482b-9fa2-0839745839bc';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94c9286d-72c0-482b-9fa2-0839745839bc';
  $display->content['new-94c9286d-72c0-482b-9fa2-0839745839bc'] = $pane;
  $display->panels['first-first'][0] = 'new-94c9286d-72c0-482b-9fa2-0839745839bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'CA Staff: Grid View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-list ca-staff-grid-4 ca-staff-list-template-1',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02d3fe70-0bee-4f9b-8bd6-17b938ee946a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_grid_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $display->content['new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e'] = $pane;
  $display->panels['middle'][0] = 'new-cc37e2b5-0bb6-4e3b-bb11-d927d800662e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'CA Staff: List View Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-list ca-staff-list-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_staff_display',
          'settings' => array(
            'ca_staff_display' => 'ca_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f82757d-5201-4e01-a98a-2a09cea7edca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ef2f14b-f965-475b-b344-2e590dce82e7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_list_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ef2f14b-f965-475b-b344-2e590dce82e7';
  $display->content['new-8ef2f14b-f965-475b-b344-2e590dce82e7'] = $pane;
  $display->panels['middle'][0] = 'new-8ef2f14b-f965-475b-b344-2e590dce82e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'CA Staff: Flex Grid View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-staff-flex ca-staff-grid-4 ca-staff-flex-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_staff_list_template',
          'settings' => array(
            'ca_staff_list_template' => 'ca_staff_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_staff_display',
          'settings' => array(
            'ca_staff_display' => 'ca_staff_display_square',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02d3fe70-0bee-4f9b-8bd6-17b938ee946a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-94c9286d-72c0-482b-9fa2-0839745839bc';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_list-ca_staff_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94c9286d-72c0-482b-9fa2-0839745839bc';
  $display->content['new-94c9286d-72c0-482b-9fa2-0839745839bc'] = $pane;
  $display->panels['middle'][0] = 'new-94c9286d-72c0-482b-9fa2-0839745839bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_staff'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_staff_add_staff';
  $page->task = 'page';
  $page->admin_title = 'CA Staff: Add Staff';
  $page->admin_description = '';
  $page->path = 'staff/add_staff';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 191817721,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Staff',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_add_staff_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff_add_staff';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_staff',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_staff_add_staff'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_staff_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Staff: Admin';
  $page->admin_description = '';
  $page->path = 'staff/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 191817721,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Staff: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-staff-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = '02b53770-3109-4939-ad13-707aafd0f10c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff_admin_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0c1eada4-4156-453a-a56d-daf5da5010f4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_admin-ca_staff_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c1eada4-4156-453a-a56d-daf5da5010f4';
  $display->content['new-0c1eada4-4156-453a-a56d-daf5da5010f4'] = $pane;
  $display->panels['middle'][0] = 'new-0c1eada4-4156-453a-a56d-daf5da5010f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_staff_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_staff_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Staff: Sort';
  $page->admin_description = '';
  $page->path = 'staff/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 191817721,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_staff_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_staff_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Staff: Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-staff-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sort';
  $display->uuid = 'af6c0b59-ec99-4f1b-bdab-827f9abf078c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_staff_sort_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0eb9a2c3-8a94-4700-870c-80d11f1ae6f5';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_staff_sort-ca_staff_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0eb9a2c3-8a94-4700-870c-80d11f1ae6f5';
  $display->content['new-0eb9a2c3-8a94-4700-870c-80d11f1ae6f5'] = $pane;
  $display->panels['middle'][0] = 'new-0eb9a2c3-8a94-4700-870c-80d11f1ae6f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_staff_sort'] = $page;

  return $pages;

}
