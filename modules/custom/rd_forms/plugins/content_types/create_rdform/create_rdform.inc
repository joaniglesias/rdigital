<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Create Form'),
  'category' => t('Recat Digital Forms'),
  'description' => t("Choose wich forms you'll be able to create"),
  'required context' => new ctools_context_required(t('Patient'), 'node'),
  'render callback' => 'create_rdform_render',
  'edit form' => 'create_rdform_edit_form',
);


function create_rdform_edit_form($form, &$form_state) {

  $conf = $form_state['conf'];

  $form['rdforms'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Forms'),
    '#description' => t('Select the forms the user will be able to create'),
    '#options' => _get_rdforms(),
    '#required' => true,
    '#default_value' => $conf['rdforms'],
    );

  return $form;

}

function create_rdform_edit_form_submit($form, &$form_state) {
  $form_state['conf']['rdforms'] = $form_state['values']['rdforms'];
}

function create_rdform_render($subtype, $conf, $panel_args, $context) {
  $form = drupal_get_form('_create_rd_form', $conf, $context);

  $block = new stdClass();
  $block->title = t('Create Form');
  $block->content = drupal_render($form);
  return $block;
}



// Form rendered for this plugin

function _create_rd_form($form, &$form_state, $conf, $context) {

  // list only selected forms
  $rdforms = _get_rdforms();
  foreach ($conf['rdforms'] as $key => $value) {
    if (empty($value)) unset($rdforms[$key]);
  }

  $form['rdform'] = array(
    '#type' => 'select',
    '#title' => t('Forms'),
    '#description' => t('Select the form you want to create'),
    '#options' => $rdforms,
    '#required' => true,
    );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Create'),
    '#prepoplulate_url' => '"' . $context->data->title . ' (' . $context->data->vid . ')"',
  );

  return $form;
}

function _create_rd_form_submit($form, &$form_state) {
  // prepopulate the url with the pacient id
  $url = 'eform/submit/' . $form_state['values']['rdform'];
  $params = array(
    'edit[rd_f_forms_related_patient][und]' => $form_state['complete form']['submit']['#prepoplulate_url'],
    'destination' => $_GET['q'],
    );
  drupal_goto($url, array('query' => $params));
}



