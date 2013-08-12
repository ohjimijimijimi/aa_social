<?php
/**
 * @file
 * aa_social.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function aa_social_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.aa_theme.mobile';
  $breakpoints[] = 'breakpoints.theme.aa_theme.normal';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'aa_social';
  $breakpoint_group->name = 'AA social';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['aa_social'] = $breakpoint_group;

  return $export;
}
