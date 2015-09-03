<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Keyboard Empty Space'),
  'category' => t('Recat Digital - Keyboard'),
  'description' => t("Empty space between buttons within the keyboard"),
  //'required context' => new ctools_context_required(t('Patient'), 'node'),
  'render callback' => 'keyboard_empty_space_render',
  'edit form' => 'keyboard_empty_space_edit_form',
  //'admin title' => t('Keyboard Button 2'),
  'admin info' => "keyboard_empty_space_admin_info",
);


function keyboard_empty_space_edit_form($form, &$form_state) {

  return $form;

}

function keyboard_empty_space_edit_form_submit($form, &$form_state) {
}


function keyboard_empty_space_admin_info($subtype, $conf, $context) {
  // $voc_machine_name = $conf['vocabulary'];
  // $block = new stdClass();
  // $block->title = $conf['all_vocabularies'][$voc_machine_name] . ' - ' . l(t('edit list'), 'admin/structure/taxonomy/' . $voc_machine_name , array('attributes' => array('target' => '_blank')));
  // if(isset($conf['collapse_panel_id'])) $block->title .= ' (collapse_panel_id: ' . $conf['collapse_panel_id'] . ')';
  // return $block;
}

function keyboard_empty_space_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  $block->content = '<div class="keyboard_empty_space" style="width: 20px;float: left;"">&nbsp;</div>';
  return $block;
}