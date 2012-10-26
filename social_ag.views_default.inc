<?php
/**
 * @file
 * social_ag.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function social_ag_views_default_views() {
  $export = array();

$view = new view();
$view->name = 'social';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Social';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Social';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Flags: remove */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'remove';
$handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
/* Field: Content: User Link */
$handler->display->display_options['fields']['field_user_link']['id'] = 'field_user_link';
$handler->display->display_options['fields']['field_user_link']['table'] = 'field_data_field_user_link';
$handler->display->display_options['fields']['field_user_link']['field'] = 'field_user_link';
$handler->display->display_options['fields']['field_user_link']['label'] = '';
$handler->display->display_options['fields']['field_user_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_user_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_user_link']['type'] = 'link_plain';
/* Field: Content: User Image */
$handler->display->display_options['fields']['field_user_image']['id'] = 'field_user_image';
$handler->display->display_options['fields']['field_user_image']['table'] = 'field_data_field_user_image';
$handler->display->display_options['fields']['field_user_image']['field'] = 'field_user_image';
$handler->display->display_options['fields']['field_user_image']['label'] = '';
$handler->display->display_options['fields']['field_user_image']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_user_image']['alter']['text'] = '<a href=\'[field_user_link]\'><img src=\'[field_user_image]\' /></a>';
$handler->display->display_options['fields']['field_user_image']['element_type'] = '0';
$handler->display->display_options['fields']['field_user_image']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_user_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_user_image']['element_wrapper_class'] = 'user-image';
$handler->display->display_options['fields']['field_user_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_user_image']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_user_image']['type'] = 'link_plain';
/* Field: Content: User Name */
$handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
$handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
$handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
$handler->display->display_options['fields']['field_user_name']['label'] = '';
$handler->display->display_options['fields']['field_user_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_user_name']['alter']['path'] = '[field_user_link]';
$handler->display->display_options['fields']['field_user_name']['alter']['external'] = TRUE;
$handler->display->display_options['fields']['field_user_name']['element_type'] = '0';
$handler->display->display_options['fields']['field_user_name']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_user_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_name']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_user_name']['element_wrapper_class'] = 'user-name';
$handler->display->display_options['fields']['field_user_name']['element_default_classes'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['element_type'] = '0';
$handler->display->display_options['fields']['field_date']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_date']['element_wrapper_class'] = 'date';
$handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_date']['type'] = 'format_interval';
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'interval' => '1',
  'interval_display' => 'time ago',
);
/* Field: Content: Source Name */
$handler->display->display_options['fields']['field_source_name']['id'] = 'field_source_name';
$handler->display->display_options['fields']['field_source_name']['table'] = 'field_data_field_source_name';
$handler->display->display_options['fields']['field_source_name']['field'] = 'field_source_name';
$handler->display->display_options['fields']['field_source_name']['label'] = '';
$handler->display->display_options['fields']['field_source_name']['element_type'] = '0';
$handler->display->display_options['fields']['field_source_name']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_source_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_source_name']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_source_name']['element_wrapper_class'] = 'source';
$handler->display->display_options['fields']['field_source_name']['element_default_classes'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_type'] = '0';
$handler->display->display_options['fields']['body']['element_label_type'] = '0';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body';
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
/* Field: Content: Preview Link */
$handler->display->display_options['fields']['field_preview_link']['id'] = 'field_preview_link';
$handler->display->display_options['fields']['field_preview_link']['table'] = 'field_data_field_preview_link';
$handler->display->display_options['fields']['field_preview_link']['field'] = 'field_preview_link';
$handler->display->display_options['fields']['field_preview_link']['label'] = '';
$handler->display->display_options['fields']['field_preview_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_preview_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_preview_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_preview_link']['type'] = 'link_plain';
/* Field: Content: Preview Thumbnail */
$handler->display->display_options['fields']['field_preview_thumb']['id'] = 'field_preview_thumb';
$handler->display->display_options['fields']['field_preview_thumb']['table'] = 'field_data_field_preview_thumb';
$handler->display->display_options['fields']['field_preview_thumb']['field'] = 'field_preview_thumb';
$handler->display->display_options['fields']['field_preview_thumb']['label'] = '';
$handler->display->display_options['fields']['field_preview_thumb']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_preview_thumb']['alter']['text'] = '<a href=\'[field_preview_link]\'><img src=\'[field_preview_thumb-url]\' /></a>';
$handler->display->display_options['fields']['field_preview_thumb']['element_type'] = '0';
$handler->display->display_options['fields']['field_preview_thumb']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_preview_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_preview_thumb']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_preview_thumb']['element_wrapper_class'] = 'preview';
$handler->display->display_options['fields']['field_preview_thumb']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_preview_thumb']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_preview_thumb']['type'] = 'link_plain';
/* Field: Content: Source Link */
$handler->display->display_options['fields']['field_source_link']['id'] = 'field_source_link';
$handler->display->display_options['fields']['field_source_link']['table'] = 'field_data_field_source_link';
$handler->display->display_options['fields']['field_source_link']['field'] = 'field_source_link';
$handler->display->display_options['fields']['field_source_link']['label'] = '';
$handler->display->display_options['fields']['field_source_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_source_link']['alter']['text'] = '<a href=\'[field_source_link-url]\'>Link to original post</a>';
$handler->display->display_options['fields']['field_source_link']['alter']['external'] = TRUE;
$handler->display->display_options['fields']['field_source_link']['alter']['alt'] = 'Source';
$handler->display->display_options['fields']['field_source_link']['element_type'] = '0';
$handler->display->display_options['fields']['field_source_link']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_source_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_source_link']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_source_link']['element_wrapper_class'] = 'link';
$handler->display->display_options['fields']['field_source_link']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_source_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_source_link']['type'] = 'link_plain';
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_type'] = '0';
$handler->display->display_options['fields']['ops']['element_label_type'] = '0';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['ops']['element_wrapper_class'] = 'flag';
$handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'post' => 'post',
  'tweet' => 'tweet',
);
/* Filter criterion: Flags: Flagged */
$handler->display->display_options['filters']['flagged']['id'] = 'flagged';
$handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
$handler->display->display_options['filters']['flagged']['field'] = 'flagged';
$handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
$handler->display->display_options['filters']['flagged']['value'] = '0';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;


  $export['social'] = $view;

  return $export;
}
