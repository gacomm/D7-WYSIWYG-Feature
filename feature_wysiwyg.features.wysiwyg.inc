<?php
/**
 * @file
 * feature_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function feature_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor_extended',
    'settings' => array(
      'default' => TRUE,
      'user_choose' => FALSE,
      'show_toggle' => FALSE,
      'theme' => 'advanced',
      'language' => 'en',
      'block_formats' => '',
      'toolbar' => array(
        0 => array(
          0 => 'Source',
          1 => '|',
          2 => 'Format',
          3 => '|',
          4 => 'Bold',
          5 => 'Italic',
          6 => '|',
          7 => 'NumberedList',
          8 => 'BulletedList',
          9 => 'Blockquote',
          10 => '|',
          11 => 'JustifyLeft',
          12 => 'JustifyCenter',
          13 => 'JustifyRight',
          14 => '|',
          15 => 'Link',
          16 => 'Unlink',
          17 => '|',
          18 => 'Maximize',
          19 => '|',
          20 => 'Subscript',
          21 => 'Superscript',
        ),
      ),
      'format_list' => array(
        0 => 'p',
        1 => 'h1',
        2 => 'h2',
        3 => 'h3',
        4 => 'h4',
        5 => 'h5',
        6 => 'h6',
      ),
      'style_list' => array(
        0 => '',
      ),
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
