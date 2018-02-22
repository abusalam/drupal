<?php

$view = new view();
$view->name = 'google_maps';
$view->description = '';
$view->tag = 'portal';
$view->base_table = 'node';
$view->human_name = 'Google Maps';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'On Google Maps';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Google Maps Location */
$handler->display->display_options['fields']['field_google_maps_location']['id'] = 'field_google_maps_location';
$handler->display->display_options['fields']['field_google_maps_location']['table'] = 'field_data_field_google_maps_location';
$handler->display->display_options['fields']['field_google_maps_location']['field'] = 'field_google_maps_location';
$handler->display->display_options['fields']['field_google_maps_location']['label'] = '';
$handler->display->display_options['fields']['field_google_maps_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_google_maps_location']['type'] = 'simple_gmap';
$handler->display->display_options['fields']['field_google_maps_location']['settings'] = array(
'include_map' => 1,
'include_static_map' => 0,
'iframe_width' => '220',
'iframe_height' => '220',
'include_link' => 1,
'link_text' => 'Navigate to this Place',
'zoom_level' => '14',
'information_bubble' => 1,
'include_text' => 0,
'map_type' => 'm',
'langcode' => 'en',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Google Maps Location (field_google_maps_location) */
$handler->display->display_options['filters']['field_google_maps_location_value']['id'] = 'field_google_maps_location_value';
$handler->display->display_options['filters']['field_google_maps_location_value']['table'] = 'field_data_field_google_maps_location';
$handler->display->display_options['filters']['field_google_maps_location_value']['field'] = 'field_google_maps_location_value';
$handler->display->display_options['filters']['field_google_maps_location_value']['operator'] = 'longerthan';
$handler->display->display_options['filters']['field_google_maps_location_value']['value'] = '1';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Location on Google Maps';
$translatables['google_maps'] = array(
t('Master'),
t('On Google Maps'),
t('more'),
t('Apply'),
t('Reset'),
t('Sort by'),
t('Asc'),
t('Desc'),
t('All'),
t('Block'),
t('Location on Google Maps'),
);
