<?php

/**
 * @file
 * template.php
 */
function rdigital_bootstrap_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,400,600,700,300&subset=latin', array('type' => 'external'));
}

//colorize buttons

function rdigital_bootstrap_colorize_text_alter(&$texts) {
  $texts['matches'][t('Apply')] = 'success';
  $texts['matches'][t('Insert')] = 'success';
  $texts['matches'][t('Import')] = 'success';

  // // This would also match the string above, however the class returned would
  // // also be the one above; "matches" takes precedence over "contains".
  // $texts['contains'][t('Unique')] = 'notice';

  // // Remove matching for strings that contain "apply":
  // unset($texts['contains'][t('Apply')]);

  // // Change the class that matches "Rebuild" (originally "warning"):
  // $texts['contains'][t('Rebuild')] = 'success';
}