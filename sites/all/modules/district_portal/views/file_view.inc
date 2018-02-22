<?php

$view = new view();
$view->name = 'file_view';
$view->description = '';
$view->tag = 'apps';
$view->base_table = 'file_managed';
$view->human_name = 'File view';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'File view';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['rendered']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'full';
/* Contextual filter: File: File ID */
$handler->display->display_options['arguments']['fid']['id'] = 'fid';
$handler->display->display_options['arguments']['fid']['table'] = 'file_managed';
$handler->display->display_options['arguments']['fid']['field'] = 'fid';
$handler->display->display_options['arguments']['fid']['default_action'] = 'default';
$handler->display->display_options['arguments']['fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['fid']['summary_options']['items_per_page'] = '25';

/* Display: Single File View */
$handler = $view->new_display('block', 'Single File View', 'block');

/* Display: Photo (70x70) View */
$handler = $view->new_display('block', 'Photo (70x70) View', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['rendered']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'photograph';

/* Display: Sign (150x50) View */
$handler = $view->new_display('block', 'Sign (150x50) View', 'block_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['rendered']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'signature';

/* Display: Photo (120x150) View */
$handler = $view->new_display('block', 'Photo (120x150) View', 'block_3');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['rendered']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'photo';
$translatables['file_view'] = array(
    t('Master'),
    t('File view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Single File View'),
    t('Photo (70x70) View'),
    t('Sign (150x50) View'),
    t('Photo (120x150) View'),
);