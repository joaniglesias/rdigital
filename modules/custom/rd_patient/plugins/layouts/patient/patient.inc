<?php

/**
 * Implement hook_panels_layouts()
 */
$plugin = array(
  'title' => t('Patient'),
  'category' => t('Recat Digital - Patient'),
  'theme' => 'patient',
  'icon' => 'patient.png',
  //'css' => 'patient.css',
  'admin theme' => 'admin_patient',
  'admin css' => 'patient.admin.css',
  'regions' => array(
    'patient' => t('Patient'),
    'patient_details_left' => t('Patient Details - Left'),
    'patient_details_middle' => t('Patient Details - Middle'),
    'patient_details_right' => t('Patient Detials - Right'),
    'rdforms_actions' => t('Form Actions'),
    'rdforms' => t('Forms'),
    'measures_record' => t('Measures Record'),
    'treatment' => t('Treatment Actions'),
  ),
);
