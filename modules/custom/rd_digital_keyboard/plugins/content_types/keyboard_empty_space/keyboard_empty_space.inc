<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Keyboard Empty Space'),
  'category' => t('Recat Digital Keyboard'),
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
}

function keyboard_empty_space_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  //$block->content = '<div class="keyboard_empty_space" style="width: 20px;float: left;">&nbsp;</div>';
  $block->content = '<div class="keyboard_empty_space">&nbsp;</div>';
  return $block;
}