<?php

/**
 * Implements hook_default_page_manager_pages()
 */
function rd_treatment_default_page_manager_pages() {

  $files = file_scan_directory(drupal_get_path('module', 'rd_treatment') .'/pages', '/\.inc/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($page)) {
      $pages[$file->name] = $page;
    }
  }

  return $pages;
}
