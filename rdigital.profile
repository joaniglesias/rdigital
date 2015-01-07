<?php

function rdigital_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'R Digital';
  $form['server_settings']['site_default_country']['#default_value'] = 'ES';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Madrid';
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}

