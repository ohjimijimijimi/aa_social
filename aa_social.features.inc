<?php
/**
 * @file
 * aa_social.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aa_social_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aa_social_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function aa_social_image_default_styles() {
  $styles = array();

  // Exported image style: social_breakpoints_theme_aa_theme_mobile_1x.
  $styles['social_breakpoints_theme_aa_theme_mobile_1x'] = array(
    'name' => 'social_breakpoints_theme_aa_theme_mobile_1x',
    'label' => 'social mobile 1x',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_breakpoints_theme_aa_theme_normal_1x.
  $styles['social_breakpoints_theme_aa_theme_normal_1x'] = array(
    'name' => 'social_breakpoints_theme_aa_theme_normal_1x',
    'label' => 'social normal 1x',
    'effects' => array(
      29 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function aa_social_node_info() {
  $items = array(
    'social' => array(
      'name' => t('Social'),
      'base' => 'node_content',
      'description' => t('Add a social link into the footer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
