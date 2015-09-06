<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Keyboard Button'),
  'category' => t('Recat Digital Keyboard'),
  'description' => t("Choose which keyboard button you want to insert"),
  //'required context' => new ctools_context_required(t('Patient'), 'node'),
  'render callback' => 'keyboard_button_render',
  'edit form' => 'keyboard_button_edit_form',
  //'admin title' => t('Keyboard Button 2'),
  'admin info' => "button_admin_info",
);


function keyboard_button_edit_form($form, &$form_state) {

  $conf = $form_state['conf'];

  $button_options = array();
  $all_buttons = array();

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'rd_ct_keyboard_button')
    ->addTag('DANGEROUS_ACCESS_CHECK_OPT_OUT');
  $result = $query->execute();

  if (!empty($result['node'])) {
    $all_buttons = node_load_multiple(array_keys($result['node']));
    foreach ($all_buttons as $nid => $button) {
      $button_options[$button->rd_f_keyb_button_int_id['und'][0]['value']] = $button->title;
    }
  }

  // sort alphabetically
  asort($button_options);

  $form['button'] = array(
    '#type' => 'select',
    '#title' => t('Button'),
    '#description' => t('Select the button'),
    '#options' => $button_options,
    '#required' => true,
    '#default_value' => $conf['button'],
    '#all_buttons' => $button_options,
    );


  $form['collapse_panel_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Collapsed panel ID'),
    '#description' => t("If you want to show a collapsed panel when clicking this button, write its collapsed panel ID"),
    '#required' => false,
    '#default_value' => $conf['collapse_panel_id'],
    );

  return $form;

}

function keyboard_button_edit_form_submit($form, &$form_state) {
  $form_state['conf']['button'] = $form_state['values']['button'];
  $form_state['conf']['all_buttons'] = $form['button']['#all_buttons'];
  $form_state['conf']['collapse_panel_id'] = $form_state['values']['collapse_panel_id'];
}


function button_admin_info($subtype, $conf, $context) {
  $button_int_id = $conf['button'];
  $block = new stdClass();
  $button_nid = _find_button_nid($button_int_id);
  $block->title = $conf['all_buttons'][$button_int_id] . ' - ' . l(t('edit button'), 'node/' . $button_nid . '/edit', array('attributes' => array('target' => '_blank')));

  if(!empty($conf['collapse_panel_id'])) $block->title .= ' (Show collapse_panel_id: ' . $conf['collapse_panel_id'] . ')';
  return $block;
}

function keyboard_button_render($subtype, $conf, $panel_args, $context) {
  $button_int_id = $conf['button'];
  $button_nid = _find_button_nid($button_int_id);
  $node = node_load($button_nid);

  $button_cover_text = $node->rd_f_keyb_button_cover_name['und'][0]['value'];
  $button_text_to_print = '';
  if (isset($node->rd_f_keyb_button_text['und'][0]['value'])){
    $button_text_to_print = $node->rd_f_keyb_button_text['und'][0]['value'];
  }
  if (isset($node->rd_f_keyb_add_to_text['und'][0]['value'])){
    $line_break = false;
    foreach ($node->rd_f_keyb_add_to_text['und'] as $key => $value) {
      switch ($value['value']) {
        case 'line_break':
          $button_text_to_print .= '<p>&nbsp;</p>';
          $line_break = true;
          break;
        case 'tab':
          $button_text_to_print = ($line_break) ? str_replace('<p>&nbsp;</p>', '<p>', $button_text_to_print) : str_replace('</p>', '', $button_text_to_print);
          $button_text_to_print .= '&nbsp;&nbsp;&nbsp;</p>';
          break;
      }
    }
  }
  $block = new stdClass();
  //$block->title = t('Digital Keyboard');

  if(!empty($conf['collapse_panel_id'])){
    $collapse_panel_id = $conf['collapse_panel_id'];
    $block->content = "<button class='btn btn-pa-purple vm-js' text-to-print='" . $button_text_to_print . "' data-toggle='collapse' data-target='#" . $collapse_panel_id . "' aria-expanded='false' aria-controls='" . $collapse_panel_id . "'>" . $button_cover_text . "</button>";
  }
  else {
    $block->content = "<button class='btn btn-danger vm-js' text-to-print='" . $button_text_to_print . "'>" . $button_cover_text . "</button>";
  }
  
  return $block;
}










