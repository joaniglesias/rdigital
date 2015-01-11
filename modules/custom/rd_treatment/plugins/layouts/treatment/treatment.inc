<?php

/**
 * Implement hook_panels_layouts()
 */
$plugin = array(
  'title' => t('Treatment'),
  'category' => t('Recat Digital - Treatment'),
  'theme' => 'treatment',
  'icon' => 'treatment.png',
  'css' => 'treatment.css',
  'admin theme' => 'admin_treatment',
  'admin css' => 'treatment.admin.css',
  'regions' => array(
    'patient' => t('Patient'),
    'patient_details_left' => t('Patient Details - Left'),
    'patient_details_right' => t('Patient Detials - Right'),
    'rdforms_actions' => t('Form Actions'),
    'rdforms' => t('Forms'),
    'measures_record' => t('Measures Record'),
    'treatment_details_left' => t('Treatment Details - Left'),
    'treatment_details_right' => t('Treatment Details - Right'),
    'initial_comments' => t('Initial Comments'),
    'measures' => t('Measures'),
    'final_comments' => t('Final Comments'),
  ),
);
