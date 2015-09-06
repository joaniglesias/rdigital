<?php

/**
 * Implements hook_default_page_manager_pages()
 */
function rd_digital_keyboard_default_panels_mini() {

  $files = file_scan_directory(drupal_get_path('module', 'rd_digital_keyboard') .'/panels_mini', '/\.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($mini)) {
      $minis[$mini->name] = $mini;
    }
  }

  return $minis;
}
