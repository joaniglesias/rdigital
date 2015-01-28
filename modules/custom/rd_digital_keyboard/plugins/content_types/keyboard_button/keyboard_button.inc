<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Keyboard Button'),
  'category' => t('Recat Digital - Keyboard'),
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
      $button_options[$nid] = $button->title;
    }
  }

  $form['button'] = array(
    '#type' => 'select',
    '#title' => t('Button'),
    '#description' => t('Select the button'),
    '#options' => $button_options,
    '#required' => true,
    '#default_value' => $conf['button'],
    '#all_buttons' => $all_buttons,
    );

  $form['field_to_edit'] = array(
    '#type' => 'select',
    '#title' => t('Field to edit'),
    '#description' => t('Select the text field which this button will edit'),
    '#options' => array(
      'initial_comments' => t('Initial Comments'),
      'measures' => t('Measures'),
      'final_comments' => t('Final Comments'),
      ),
    '#required' => true,
    '#default_value' => $conf['field_to_edit'],
    );

  return $form;

}

function keyboard_button_edit_form_submit($form, &$form_state) {
  $form_state['conf']['button'] = $form_state['values']['button'];
  $form_state['conf']['field_to_edit'] = $form_state['values']['field_to_edit'];
  $form_state['conf']['all_buttons'] = $form['button']['#all_buttons'];
}


function button_admin_info($subtype, $conf, $context) {
  $button_nid = $conf['button'];
  $block = new stdClass();
  $block->title = $conf['all_buttons'][$button_nid]->title . ' - ' . l(t('edit button'), 'node/' . $button_nid . '/edit', array());
  //$block->content = l(t('Edit button'), 'node/' . $button->nid . '/edit', array());
  return $block;
}

function keyboard_button_render($subtype, $conf, $panel_args, $context) {
  $button_nid = $conf['button'];
  $field_to_edit = $conf['field_to_edit'];
  $button_cover_text = $conf['all_buttons'][$button_nid]->rd_f_keyb_button_cover_name['und'][0]['value'];
  $button_text_to_print = $conf['all_buttons'][$button_nid]->rd_f_keyb_button_text['und'][0]['value'];
  $block = new stdClass();
  //$block->title = t('Digital Keyboard');
  $block->content = "<button class='btn btn-danger vm-js' text-to-print='" . $button_text_to_print . "' field-to-edit='" . $field_to_edit . "'>" . $button_cover_text . "</button>";
  return $block;
}



// function _create_keyboard(){
// $value = 5;
// $link_inner = '<span class="glyphicon glyphicon-home">' . $value . '</span>';

// $link_ajax = l($link_inner, 'keyboard_button/nojs/'. $value,
//           array('attributes' => array(
//                   'class' => 'use-ajax btn btn-info vm-icon-button',
//                   'data-toggle' => 'tooltip',
//                   'data-placement' => 'top',
//                   'text-boto' => '<b>barcelona</p>',
//                   'title' => $value),
//                 'html' => TRUE)
//         );

// $link_inner = '<span class="glyphicon glyphicon-home">JS</span>';
// $link_js = l($link_inner, '/create-treatment/12/13',
//                 array(
//                   'attributes' => array(
//                     'class' => 'use-ajax btn btn-info vm-js',
//                     //'data-target' => $values->nid,
//                     'data-toggle' => 'tooltip',
//                     //'data-target' => '11/13',
//                     'data-placement' => 'top',
//                     'text-boto' => 'Joan',
//                     'title' => 'JS'),
//                   //'external' => FALSE, //NOTE: this is to create an anchor '#' to th href link
//                   //'fragment' => FALSE,
//                   'html' => TRUE
//                 )
//               );
// $link_js = "<button class='btn btn-danger vm-js' text-boto='\n\tHOLA'>Hola</button>";
// $output = "
// <div class='row panel'>
//   <div class='col-xs-3'>
//     <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='MF'>MF</button>
//          <button class='btn btn-danger vm-js' text-boto='F'>F</button>
//          <button class='btn btn-danger vm-js' text-boto='+'>+</button>
//          <button class='btn btn-danger vm-js' text-boto='+++'>+++</button>
//     </div>
//     <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='\n'>ENTER</button>
//          <button class='btn btn-danger vm-js' text-boto='\t'>TAB</button>
//     </div>
//   </div>
//   <div class='col-xs-3'>
//     <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='\n\tf/F'>f / F</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tr/F'>r / F</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tp/F'>p / F</button>
//     </div>
//     <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='\n\tf/R'>f / R</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tr/R'>r / R</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tp/R'>p / R</button>
//     </div>
//     <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='\n\tf/P'>f / P</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tr/P'>r / P</button>
//          <button class='btn btn-danger vm-js' text-boto='\n\tp/P'>p / P</button>
//     </div>
//   </div>
//   <div class='col-xs-3'>
//         <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='ABB'>ABB</button>
//          <button class='btn btn-danger vm-js' text-boto='Material'>Material</button>
//          <button class='btn btn-danger vm-js' text-boto='Immaterial'>Immaterial</button>
//         </div>
//         <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='A'>A</button>
//          <button class='btn btn-danger vm-js' text-boto='T'>T</button>
//          <button class='btn btn-danger vm-js' text-boto='G'>G</button>
//          <button class='btn btn-danger vm-js' text-boto='C'>C</button>
//         </div>
//   </div>
//   <div class='col-xs-3'>
//         <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='dreta'>dreta</button>
//          <button class='btn btn-danger vm-js' text-boto='esquerre'>esquerre</button>
//          <button class='btn btn-danger vm-js' text-boto='davant'>davant</button>
//          <button class='btn btn-danger vm-js' text-boto='darrera'>darrera</button>
//         </div>
//         <div class='row panel' >
//          <button class='btn btn-danger vm-js' text-boto='16'>16</button>
//          <button class='btn btn-danger vm-js' text-boto='75'>75</button>
//          <button class='btn btn-danger vm-js' text-boto='55'>55</button>
//          <button class='btn btn-danger vm-js' text-boto='70'>70</button>
//         </div>
//   </div>
// </div>";
//   return $output;

// }









