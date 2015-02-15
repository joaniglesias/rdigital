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
  //$block->title = t('Digital Keyboard');
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
                  'text-to-print' => '<b>barcelona</p>',
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
                    'text-to-print' => 'Joan',
                    'title' => 'JS'),
                  //'external' => FALSE, //NOTE: this is to create an anchor '#' to th href link
                  //'fragment' => FALSE,
                  'html' => TRUE
                )
              );
$link_js = "<button class='btn btn-danger vm-js' text-to-print='\n\tHOLA'>Hola</button>";
$output = "
<div class='row panel'>
  <div class='col-xs-3'>
    <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='MF'>MF</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='F'>F</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='+'>+</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='+++'>+++</button>
    </div>
    <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='</p><p>'>ENTER</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='&nbsp;'>TAB</button>
    </div>
  </div>
  <div class='col-xs-3'>
    <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p><p>Ff</p>'>F f</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Fr'>F r</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Fp'>F p</button>
    </div>
    <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Rf'>R f</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Rr'>R r</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Rp'>R p</button>
    </div>
    <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Pf'>P f</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Pr'>P r</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='<p></p>Pp'>P p</button>
    </div>
  </div>
  <div class='col-xs-3'>
        <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='ABB'>ABB</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='Material'>Material</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='Immaterial'>Immaterial</button>
        </div>
        <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='A'>A</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='T'>T</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='G'>G</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='C'>C</button>
        </div>
  </div>
  <div class='col-xs-3'>
        <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='dreta'>dreta</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='esquerre'>esquerre</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='davant'>davant</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='darrera'>darrera</button>
        </div>
        <div class='row panel' >
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='16'>16</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='75'>75</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='55'>55</button>
         <button class='btn btn-danger vm-js rd-button-list' text-to-print='70'>70</button>
        </div>
  </div>
</div>";
  return $output;

}










