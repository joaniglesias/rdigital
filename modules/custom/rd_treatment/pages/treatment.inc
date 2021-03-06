<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'treatment';
$page->task = 'page';
$page->admin_title = 'Treatment';
$page->admin_description = '';
$page->path = 'treatment/%patient_nid/%treatment_nid';
$page->access = array(
  'plugins' => array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 2,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  ),
  'logic' => 'and',
);
$page->menu = array();
$page->arguments = array(
  'patient_nid' => array(
    'id' => 1,
    'identifier' => 'Patient Node: ID',
    'name' => 'entity_id:node',
    'settings' => array(),
  ),
  'treatment_nid' => array(
    'id' => 2,
    'identifier' => 'Treatment Node: ID',
    'name' => 'entity_id:node',
    'settings' => array(),
  ),
);
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_treatment_panel_context';
$handler->task = 'page';
$handler->subtask = 'treatment';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
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
            'rd_ct_patient' => 'rd_ct_patient',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'rd_ct_treatment' => 'rd_ct_treatment',
          ),
        ),
        'context' => 'argument_entity_id:node_2',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'treatment id is related with patient id',
          'php' => 'if($contexts[\'argument_entity_id:node_2\']->data->rd_f_treat_related_patient[\'und\'][0][\'target_id\'] == $contexts[\'argument_entity_id:node_1\']->data->nid) {
return TRUE;
}
else{
return FALSE;
}',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'treatment';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'left_above' => NULL,
    'right_above' => NULL,
    'left_below' => NULL,
    'right_below' => NULL,
    'bottom' => NULL,
    'patient' => NULL,
    'patient_details_left' => NULL,
    'patient_details_right' => NULL,
    'rdforms' => NULL,
    'measures_record' => NULL,
    'treatment_details_left' => NULL,
    'treatment_details_right' => NULL,
    'initial_comments' => NULL,
    'measures' => NULL,
    'final_comments' => NULL,
    'rdforms_actions' => NULL,
    'patient_details_middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'final_comments';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_treat_fin_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'text_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
    ),
    'context' => 'argument_entity_id:node_2',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-1'] = $pane;
  $display->panels['final_comments'][0] = 'new-1';
  $pane = new stdClass();
  $pane->pid = 'new-2';
  $pane->panel = 'initial_comments';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_treat_ini_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'text_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
    ),
    'context' => 'argument_entity_id:node_2',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-2'] = $pane;
  $display->panels['initial_comments'][0] = 'new-2';
  $pane = new stdClass();
  $pane->pid = 'new-3';
  $pane->panel = 'measures';
  $pane->type = 'panels_mini';
  $pane->subtype = 'digital_keyboard_v1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-3'] = $pane;
  $display->panels['measures'][0] = 'new-3';
  $pane = new stdClass();
  $pane->pid = 'new-4';
  $pane->panel = 'measures';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_treat_measures';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'text_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
    ),
    'context' => 'argument_entity_id:node_2',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-4'] = $pane;
  $display->panels['measures'][1] = 'new-4';
  $pane = new stdClass();
  $pane->pid = 'new-5';
  $pane->panel = 'measures_record';
  $pane->type = 'views';
  $pane->subtype = 'measures_record';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-5'] = $pane;
  $display->panels['measures_record'][0] = 'new-5';
  $pane = new stdClass();
  $pane->pid = 'new-6';
  $pane->panel = 'patient';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'patient-title',
    'css_class' => 'text-xlg  text-semibold pull-left',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-6'] = $pane;
  $display->panels['patient'][0] = 'new-6';
  $pane = new stdClass();
  $pane->pid = 'new-7';
  $pane->panel = 'patient';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_genre';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pull-left padding-xs-vr panel-padding-h bg-rd-dark-blue text-bg',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-7'] = $pane;
  $display->panels['patient'][1] = 'new-7';
  $pane = new stdClass();
  $pane->pid = 'new-8';
  $pane->panel = 'patient';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_dob';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'format_interval',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'interval' => '1',
      'interval_display' => 'raw time ago',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Edad ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pull-left padding-xs-vr bg-rd-dark-blue text-bg',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $display->content['new-8'] = $pane;
  $display->panels['patient'][2] = 'new-8';
  $pane = new stdClass();
  $pane->pid = 'new-9';
  $pane->panel = 'patient';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_excel_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pull-left padding-xs-vr panel-padding-h bg-rd-dark-blue text-bg',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $display->content['new-9'] = $pane;
  $display->panels['patient'][3] = 'new-9';
  $pane = new stdClass();
  $pane->pid = 'new-10';
  $pane->panel = 'patient_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_dob';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'short',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-10'] = $pane;
  $display->panels['patient_details_left'][0] = 'new-10';
  $pane = new stdClass();
  $pane->pid = 'new-11';
  $pane->panel = 'patient_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_city';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-11'] = $pane;
  $display->panels['patient_details_left'][1] = 'new-11';
  $pane = new stdClass();
  $pane->pid = 'new-12';
  $pane->panel = 'patient_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_state';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $display->content['new-12'] = $pane;
  $display->panels['patient_details_left'][2] = 'new-12';
  $pane = new stdClass();
  $pane->pid = 'new-13';
  $pane->panel = 'patient_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_occupation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $display->content['new-13'] = $pane;
  $display->panels['patient_details_left'][3] = 'new-13';
  $pane = new stdClass();
  $pane->pid = 'new-14';
  $pane->panel = 'patient_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_recommended';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $display->content['new-14'] = $pane;
  $display->panels['patient_details_left'][4] = 'new-14';
  $pane = new stdClass();
  $pane->pid = 'new-15';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_appo_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-15'] = $pane;
  $display->panels['patient_details_middle'][0] = 'new-15';
  $pane = new stdClass();
  $pane->pid = 'new-16';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_o_symptoms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-16'] = $pane;
  $display->panels['patient_details_middle'][1] = 'new-16';
  $pane = new stdClass();
  $pane->pid = 'new-17';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_c_medicine';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $display->content['new-17'] = $pane;
  $display->panels['patient_details_middle'][2] = 'new-17';
  $pane = new stdClass();
  $pane->pid = 'new-18';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_a_therapies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $display->content['new-18'] = $pane;
  $display->panels['patient_details_middle'][3] = 'new-18';
  $pane = new stdClass();
  $pane->pid = 'new-19';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_homeopathy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $display->content['new-19'] = $pane;
  $display->panels['patient_details_middle'][4] = 'new-19';
  $pane = new stdClass();
  $pane->pid = 'new-20';
  $pane->panel = 'patient_details_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_tried_before';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $display->content['new-20'] = $pane;
  $display->panels['patient_details_middle'][5] = 'new-20';
  $pane = new stdClass();
  $pane->pid = 'new-21';
  $pane->panel = 'patient_details_right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_patient_incidences';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-21'] = $pane;
  $display->panels['patient_details_right'][0] = 'new-21';
  $pane = new stdClass();
  $pane->pid = 'new-22';
  $pane->panel = 'rdforms';
  $pane->type = 'views';
  $pane->subtype = 'forms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-22'] = $pane;
  $display->panels['rdforms'][0] = 'new-22';
  $pane = new stdClass();
  $pane->pid = 'new-23';
  $pane->panel = 'rdforms_actions';
  $pane->type = 'create_rdform';
  $pane->subtype = 'create_rdform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rdforms' => array(
      'formulario_tabaco_test' => 'formulario_tabaco_test',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-23'] = $pane;
  $display->panels['rdforms_actions'][0] = 'new-23';
  $pane = new stdClass();
  $pane->pid = 'new-24';
  $pane->panel = 'treatment_details_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_treat_date_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'fallback_format' => 'date_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
    ),
    'context' => 'argument_entity_id:node_2',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-24'] = $pane;
  $display->panels['treatment_details_left'][0] = 'new-24';
  $pane = new stdClass();
  $pane->pid = 'new-25';
  $pane->panel = 'treatment_details_right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:rd_f_access_treat_centre';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'taxonomy_term_reference_plain',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
    ),
    'context' => 'argument_entity_id:node_2',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-25'] = $pane;
  $display->panels['treatment_details_right'][0] = 'new-25';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
