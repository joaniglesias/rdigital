<?php

/**
 * Implement hook_panels_layouts()
 */
$plugin = array(
  'title' => t('Keyboard 1'),
  'category' => t('Recat Digital - Keyboard'),
  'theme' => 'keyboard1',
  'icon' => 'keyboard1.png',
  'css' => 'keyboard1.css',
  'admin theme' => 'admin_keyboard1',
  'admin css' => 'keyboard1.admin.css',
  'regions' => array(
    'top_1' => t('Top 1'),
    'top_2_left' => t('Top 2 Left'),
    'top_2_right' => t('Top 2 Right'),
    'top_3_left' => t('Top 3 Left'),
    'top_3_right' => t('Top 3 Right'),
    'col_1_top' => t('Col 1 Top'),
    'col_1_middle' => t('Col 1 Middle'),
    'col_1_bottom' => t('Col 1 Bottom'),
    'col_2_top' => t('Col 2 Top'),
    'col_2_middle' => t('Col 2 Middle'),
    'col_2_bottom' => t('Col 2 Bottom'),
    'col_3_top' => t('Col 3 Top'),
    'col_3_middle' => t('Col 3 Middle'),
    'col_3_bottom' => t('Col 3 Bottom'),
    'col_4_top' => t('Col 4 Top'),
    'col_4_middle' => t('Col 4 Middle'),
    'col_4_bottom' => t('Col 4 Bottom'),
    'bottomt_1' => t('Bottom 1'),
    'bottomt_2' => t('Bottom 2'),
  ),
);
