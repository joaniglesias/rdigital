<?php

/**
 * @file
 * template.php
 */
function rdigital_bootstrap_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,400,600,700,300&subset=latin', array('type' => 'external'));
}
