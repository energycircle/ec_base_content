<?php
/**
 * @file
 * ec_base_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_base_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'node/3';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'node/2';
  $export['site_404'] = $strongarm;

  return $export;
}
