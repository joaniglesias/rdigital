<?php

/**
 * Implement hook_panels_layouts()
 */
$plugin = array(
  'title' => t('Keyboard comments'),
  'category' => t('Recat Digital - Keyboard'),
  'theme' => 'keyboardcomments',
  'icon' => 'keyboardcomments.png',
  'css' => 'keyboardcomments.css',
  'admin theme' => 'admin_keyboardcomments',
  'admin css' => 'keyboardcomments.admin.css',
  'regions' => array(
    'row_1' => t('Row 1'),
    'row_2' => t('Row 2'),
    'row_3' => t('Row 3'),
    'row_4' => t('Row 4'),
    'comments' => t('KeyboardComments'),
  ),
);
