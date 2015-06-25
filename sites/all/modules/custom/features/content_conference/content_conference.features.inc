<?php
/**
 * @file
 * content_conference.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_conference_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_conference_node_info() {
  $items = array(
    'conference' => array(
      'name' => t('Conference'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
