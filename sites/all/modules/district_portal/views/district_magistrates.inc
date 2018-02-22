<?php

$view = new view();
$view->name = 'district_magistrates';
$view->description = '';
$view->tag = 'portal';
$view->base_table = 'webform_submissions';
$view->human_name = 'District Magistrates';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'District Magistrates';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '518400';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '518400';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Webform submissions: Data */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['label'] = 'From';
$handler->display->display_options['relationships']['data']['required'] = TRUE;
$handler->display->display_options['relationships']['data']['webform_nid'] = '262';
$handler->display->display_options['relationships']['data']['webform_cid'] = '2';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['label'] = '';
$handler->display->display_options['fields']['value']['webform_nid'] = '262';
$handler->display->display_options['fields']['value']['webform_cid'] = '1';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['label'] = 'From (Day, mm/dd/yyyy)';
$handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '262';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '2';
$handler->display->display_options['fields']['value_1']['webform_datatype'] = 'number';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['label'] = 'To (Day, mm/dd/yyyy)';
$handler->display->display_options['fields']['value_2']['empty'] = 'Till Date';
$handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '262';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '3';
/* Field: Webform submissions: Edit link */
$handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
$handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
$handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_submission']['access_check'] = 1;
/* Sort criterion: Webform submission data: Data field */
$handler->display->display_options['sorts']['data']['id'] = 'data';
$handler->display->display_options['sorts']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['sorts']['data']['field'] = 'data';
$handler->display->display_options['sorts']['data']['relationship'] = 'data';
$handler->display->display_options['sorts']['data']['order'] = 'DESC';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'district-magistrates';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'District Magistrates';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-about-district';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['district_magistrates'] = array(
t('Master'),
t('District Magistrates'),
t('more'),
t('Apply'),
t('Reset'),
t('Sort by'),
t('Asc'),
t('Desc'),
t('From'),
t('From (Day, mm/dd/yyyy)'),
t('To (Day, mm/dd/yyyy)'),
t('Till Date'),
t('edit'),
t('Page'),
);