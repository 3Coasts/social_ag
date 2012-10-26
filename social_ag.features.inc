<?php
/**
 * @file
 * social_ag.features.inc
 */

/**
 * Implements hook_views_api().
 */
function social_ag_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function social_ag_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
