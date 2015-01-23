<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Digital Keyboard'),
  'category' => t('Recat Digital - Keyboard'),
  'description' => t("Choose which digital keyboard you want to insert"),
  //'required context' => new ctools_context_required(t('Patient'), 'node'),
  'render callback' => 'digital_keyboard_render',
  //'edit form' => 'digital_keyboard_edit_form',
);


// function digital_keyboard_edit_form($form, &$form_state) {

//   $conf = $form_state['conf'];

//   $form['rdforms'] = array(
//     '#type' => 'checkboxes',
//     '#title' => t('Forms'),
//     '#description' => t('Select the Forms the user will be able to create'),
//     '#options' => _get_rdforms(),
//     '#required' => true,
//     '#default_value' => $conf['rdforms'],
//     );

//   return $form;

// }

// function digital_keyboard_edit_form_submit($form, &$form_state) {
//   $form_state['conf']['rdforms'] = $form_state['values']['rdforms'];
// }

function digital_keyboard_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  $block->title = t('Digital Keyboard');
  $block->content = _create_keyboard();
  return $block;
}







function _create_keyboard(){
$value = 5;
$link_inner = '<span class="glyphicon glyphicon-home">' . $value . '</span>';

$link_ajax = l($link_inner, 'keyboard_button/nojs/'. $value,
          array('attributes' => array(
                  'class' => 'use-ajax btn btn-info vm-icon-button',
                  'data-toggle' => 'tooltip',
                  'data-placement' => 'top',
                  'text-boto' => '<b>barcelona</p>',
                  'title' => $value),
                'html' => TRUE)
        );

$link_inner = '<span class="glyphicon glyphicon-home">JS</span>';
$link_js = l($link_inner, '/create-treatment/12/13',
                array(
                  'attributes' => array(
                    'class' => 'use-ajax btn btn-info vm-js',
                    //'data-target' => $values->nid,
                    'data-toggle' => 'tooltip',
                    //'data-target' => '11/13',
                    'data-placement' => 'top',
                    'text-boto' => 'Joan',
                    'title' => 'JS'),
                  //'external' => FALSE, //NOTE: this is to create an anchor '#' to th href link
                  //'fragment' => FALSE,
                  'html' => TRUE
                )
              );
$link_js = "<button class='btn btn-danger vm-js' text-boto='\n\tHOLA'>Hola</button>";
$output = "
<div class='row well'>
  <div class='col-xs-3'>
    <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='MF'>MF</button>
         <button class='btn btn-danger vm-js' text-boto='F'>F</button>
         <button class='btn btn-danger vm-js' text-boto='+'>+</button>
         <button class='btn btn-danger vm-js' text-boto='+++'>+++</button>
    </div>
    <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='\n'>ENTER</button>
         <button class='btn btn-danger vm-js' text-boto='\t'>TAB</button>
    </div>
  </div>
  <div class='col-xs-3'>
    <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='\n\tf/F'>f / F</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tr/F'>r / F</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tp/F'>p / F</button>
    </div>
    <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='\n\tf/R'>f / R</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tr/R'>r / R</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tp/R'>p / R</button>
    </div>
    <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='\n\tf/P'>f / P</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tr/P'>r / P</button>
         <button class='btn btn-danger vm-js' text-boto='\n\tp/P'>p / P</button>
    </div>
  </div>
  <div class='col-xs-3'>
        <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='ABB'>ABB</button>
         <button class='btn btn-danger vm-js' text-boto='Material'>Material</button>
         <button class='btn btn-danger vm-js' text-boto='Immaterial'>Immaterial</button>
        </div>
        <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='A'>A</button>
         <button class='btn btn-danger vm-js' text-boto='T'>T</button>
         <button class='btn btn-danger vm-js' text-boto='G'>G</button>
         <button class='btn btn-danger vm-js' text-boto='C'>C</button>
        </div>
  </div>
  <div class='col-xs-3'>
        <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='dreta'>dreta</button>
         <button class='btn btn-danger vm-js' text-boto='esquerre'>esquerre</button>
         <button class='btn btn-danger vm-js' text-boto='davant'>davant</button>
         <button class='btn btn-danger vm-js' text-boto='darrera'>darrera</button>
        </div>
        <div class='row' >
         <button class='btn btn-danger vm-js' text-boto='16'>16</button>
         <button class='btn btn-danger vm-js' text-boto='75'>75</button>
         <button class='btn btn-danger vm-js' text-boto='55'>55</button>
         <button class='btn btn-danger vm-js' text-boto='70'>70</button>
        </div>
  </div>
</div>";
  return $output;

}










