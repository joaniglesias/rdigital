<?php
/**
 * Implementation of hook_views_default_views().
 *
 * This hook allows modules to provide their own views
 * which can either be used as-is or as a "starter" for users to build from.
 */

function rd_digital_keyboard_views_default_views() {

  $files = file_scan_directory(drupal_get_path('module', 'rd_digital_keyboard') . '/views', '/.*\.view$/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }

  return $views;
}
