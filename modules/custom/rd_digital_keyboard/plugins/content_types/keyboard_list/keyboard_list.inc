<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Keyboard List'),
  'category' => t('Recat Digital - Keyboard'),
  'description' => t("Choose which keyboard list you want to insert"),
  //'required context' => new ctools_context_required(t('Patient'), 'node'),
  'render callback' => 'keyboard_list_render',
  'edit form' => 'keyboard_list_edit_form',
  //'admin title' => t('Keyboard Button 2'),
  'admin info' => "keyboard_list_admin_info",
);


function keyboard_list_edit_form($form, &$form_state) {

  $conf = $form_state['conf'];
  $vocabularies = array();

  foreach (taxonomy_get_vocabularies() as $vid => $vocabulary) {
    $vocabularies[$vocabulary->machine_name] = $vocabulary->name;
  }

  // $button_options = array();
  // $all_buttons = array();

  // $query = new EntityFieldQuery();
  // $query->entityCondition('entity_type', 'node')
  //   ->entityCondition('bundle', 'rd_ct_keyboard_list')
  //   ->addTag('DANGEROUS_ACCESS_CHECK_OPT_OUT');
  // $result = $query->execute();

  // if (!empty($result['node'])) {
  //   $all_buttons = node_load_multiple(array_keys($result['node']));
  //   foreach ($all_buttons as $nid => $button) {
  //     $button_options[$nid] = $button->title;
  //   }
  // }

  $form['vocabulary'] = array(
    '#type' => 'select',
    '#title' => t('List'),
    '#description' => t('Select the Taxonomy List'),
    '#options' => $vocabularies,
    '#required' => true,
    '#default_value' => $conf['vocabulary'],
    '#all_vocabularies' => $vocabularies,
    );

  $form['collapse_panel_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Collapsed panel ID'),
    '#description' => t("If you want to collapse this panel, write an ID (IMP: the ID needs to be unique). Leave it blank if you don't want to callapse it"),
    '#required' => false,
    '#default_value' => $conf['collapse_panel_id'],
    );

  return $form;

}

function keyboard_list_edit_form_submit($form, &$form_state) {
  $form_state['conf']['vocabulary'] = $form_state['values']['vocabulary'];
  $form_state['conf']['all_vocabularies'] = $form['vocabulary']['#all_vocabularies'];
  $form_state['conf']['collapse_panel_id'] = $form_state['values']['collapse_panel_id'];
}


function keyboard_list_admin_info($subtype, $conf, $context) {
  $voc_machine_name = $conf['vocabulary'];
  $block = new stdClass();
  $block->title = $conf['all_vocabularies'][$voc_machine_name] . ' - ' . l(t('edit list'), 'admin/structure/taxonomy/' . $voc_machine_name , array('attributes' => array('target' => '_blank')));
  if(isset($conf['collapse_panel_id'])) $block->title .= ' (collapse_panel_id: ' . $conf['collapse_panel_id'] . ')';
  return $block;
}

function keyboard_list_render($subtype, $conf, $panel_args, $context) {
  $voc_machine_name = $conf['vocabulary'];
  $output = '';
  foreach (_get_vocabulary_terms($voc_machine_name) as $tid => $term_name) {
    $button_cover_text = $term_name;
    $button_text_to_print = $term_name;
    $output .= "<button class='btn btn-danger vm-js rd-button-list' text-to-print='" . $button_text_to_print . "'>" . $button_cover_text . "</button>";
  }

  if(isset($conf['collapse_panel_id'])){
    $collapse_panel_id = $conf['collapse_panel_id'];
    $output = '<div class="collapse alert alert-danger fade" id="' . $collapse_panel_id . '">
  <a href="#' . $collapse_panel_id . '" class="close" data-toggle="collapse" aria-label="close" aria-expanded="false" >&times;</a>' . $output . '</div>';
  }

  $block = new stdClass();
  $block->content = $output;
  return $block;
}



// function _create_keyboard(){
// $value = 5;
// $link_inner = '<span class="glyphicon glyphicon-home">' . $value . '</span>';

// $link_ajax = l($link_inner, 'keyboard_list/nojs/'. $value,
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










