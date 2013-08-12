<?php
/**
 * @file
 * aa_social.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function aa_social_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'aa_social';
  $picture_mapping->breakpoint_group = 'aa_social';
  $picture_mapping->mapping = array(
    'breakpoints.theme.aa_theme.mobile' => array(
      '1x' => 'social_breakpoints_theme_aa_theme_mobile_1x',
    ),
    'breakpoints.theme.aa_theme.normal' => array(
      '1x' => 'social_breakpoints_theme_aa_theme_normal_1x',
    ),
  );
  $export['aa_social'] = $picture_mapping;

  return $export;
}
