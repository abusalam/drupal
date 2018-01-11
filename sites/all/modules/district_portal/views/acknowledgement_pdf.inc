<?php
$view = new view();
$view->name = 'acknowledgement';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'webform_submissions';
$view->human_name = 'Acknowledgement';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'dlsc_admit_ns';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Enter your Mobile Number to download admit';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Submission Data :: Photograph */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Submission Data :: Photograph';
$handler->display->display_options['relationships']['data']['label'] = 'Submission Data :: Photograph';
$handler->display->display_options['relationships']['data']['webform_nid'] = '300';
$handler->display->display_options['relationships']['data']['webform_cid'] = '14';
/* Relationship: Submission Data :: Signature */
$handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
$handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_1']['field'] = 'data';
$handler->display->display_options['relationships']['data_1']['ui_name'] = 'Submission Data :: Signature';
$handler->display->display_options['relationships']['data_1']['label'] = 'Submission Data :: Signature';
$handler->display->display_options['relationships']['data_1']['webform_nid'] = '300';
$handler->display->display_options['relationships']['data_1']['webform_cid'] = '15';
/* Relationship: Submission Data :: Mobile */
$handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
$handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_2']['field'] = 'data';
$handler->display->display_options['relationships']['data_2']['ui_name'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data_2']['label'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data_2']['webform_nid'] = '300';
$handler->display->display_options['relationships']['data_2']['webform_cid'] = '2';
/* Field: Submission Data :: Photograph */
$handler->display->display_options['fields']['data']['id'] = 'data';
$handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data']['field'] = 'data';
$handler->display->display_options['fields']['data']['relationship'] = 'data';
$handler->display->display_options['fields']['data']['ui_name'] = 'Submission Data :: Photograph';
$handler->display->display_options['fields']['data']['label'] = '';
$handler->display->display_options['fields']['data']['exclude'] = TRUE;
$handler->display->display_options['fields']['data']['element_label_colon'] = FALSE;
/* Field: Submission Data :: Signature */
$handler->display->display_options['fields']['data_1']['id'] = 'data_1';
$handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data_1']['field'] = 'data';
$handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
$handler->display->display_options['fields']['data_1']['ui_name'] = 'Submission Data :: Signature';
$handler->display->display_options['fields']['data_1']['label'] = '';
$handler->display->display_options['fields']['data_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['data_1']['element_label_colon'] = FALSE;
/* Field: Submission Data :: Photograph */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['ui_name'] = 'Submission Data :: Photograph';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'file_view';
$handler->display->display_options['fields']['view']['display'] = 'block';
$handler->display->display_options['fields']['view']['arguments'] = '[!data]';
/* Field: Submission Data :: Signature */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['ui_name'] = 'Submission Data :: Signature';
$handler->display->display_options['fields']['view_1']['label'] = '';
$handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_1']['view'] = 'file_view';
$handler->display->display_options['fields']['view_1']['display'] = 'block';
$handler->display->display_options['fields']['view_1']['arguments'] = '[!data_1]';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_6']['id'] = 'value_6';
$handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_6']['field'] = 'value';
$handler->display->display_options['fields']['value_6']['label'] = '';
$handler->display->display_options['fields']['value_6']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_6']['webform_cid'] = '44';
/* Field: Submission Data :: Name */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['ui_name'] = 'Submission Data :: Name';
$handler->display->display_options['fields']['value']['label'] = 'Name of Applicant';
$handler->display->display_options['fields']['value']['custom_label'] = 'none';
$handler->display->display_options['fields']['value']['webform_nid'] = '300';
$handler->display->display_options['fields']['value']['webform_cid'] = '6';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['label'] = 'Father\'s Name -';
$handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '10';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['label'] = 'House No. / Area / Locality';
$handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_2']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '18';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['label'] = 'Vill / Town';
$handler->display->display_options['fields']['value_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_4']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '19';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['label'] = 'Post Office';
$handler->display->display_options['fields']['value_5']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_5']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '20';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_9']['id'] = 'value_9';
$handler->display->display_options['fields']['value_9']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_9']['field'] = 'value';
$handler->display->display_options['fields']['value_9']['label'] = 'Police Station';
$handler->display->display_options['fields']['value_9']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['value_9']['alter']['text'] = '[value_2],[value_4],[value_5],[value_9]';
$handler->display->display_options['fields']['value_9']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_9']['webform_cid'] = '21';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_10']['id'] = 'value_10';
$handler->display->display_options['fields']['value_10']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_10']['field'] = 'value';
$handler->display->display_options['fields']['value_10']['label'] = 'District';
$handler->display->display_options['fields']['value_10']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_10']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_10']['webform_cid'] = '22';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_12']['id'] = 'value_12';
$handler->display->display_options['fields']['value_12']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_12']['field'] = 'value';
$handler->display->display_options['fields']['value_12']['label'] = 'State';
$handler->display->display_options['fields']['value_12']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_12']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_12']['webform_cid'] = '23';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_13']['id'] = 'value_13';
$handler->display->display_options['fields']['value_13']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_13']['field'] = 'value';
$handler->display->display_options['fields']['value_13']['label'] = 'PIN Code';
$handler->display->display_options['fields']['value_13']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['value_13']['alter']['text'] = '[value_10], [value_12], [value_13]';
$handler->display->display_options['fields']['value_13']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_13']['webform_cid'] = '24';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_7']['id'] = 'value_7';
$handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_7']['field'] = 'value';
$handler->display->display_options['fields']['value_7']['label'] = '';
$handler->display->display_options['fields']['value_7']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_7']['webform_cid'] = '43';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['label'] = 'Name -';
$handler->display->display_options['fields']['value_3']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_3']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '6';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_8']['id'] = 'value_8';
$handler->display->display_options['fields']['value_8']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_8']['field'] = 'value';
$handler->display->display_options['fields']['value_8']['label'] = '';
$handler->display->display_options['fields']['value_8']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_8']['webform_cid'] = '44';
/* Field: PDF: Page Break */
$handler->display->display_options['fields']['page_break']['id'] = 'page_break';
$handler->display->display_options['fields']['page_break']['table'] = 'pdf';
$handler->display->display_options['fields']['page_break']['field'] = 'page_break';
$handler->display->display_options['fields']['page_break']['label'] = '';
$handler->display->display_options['fields']['page_break']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['page_break']['last_row'] = 0;
$handler->display->display_options['fields']['page_break']['every_nth'] = '1';
/* Filter criterion: Webform submissions: Node */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['min'] = '300';
$handler->display->display_options['filters']['nid']['value']['max'] = '301';
$handler->display->display_options['filters']['nid']['value']['value'] = '300';
$handler->display->display_options['filters']['nid']['group'] = 1;
/* Filter criterion: Webform submissions: Sid */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'Application ID:';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);
/* Filter criterion: Submission Data :: Mobile */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['relationship'] = 'data_2';
$handler->display->display_options['filters']['data']['ui_name'] = 'Submission Data :: Mobile';
$handler->display->display_options['filters']['data']['group'] = 1;
$handler->display->display_options['filters']['data']['exposed'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['label'] = 'Mobile No';
$handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['identifier'] = 'mobile';
$handler->display->display_options['filters']['data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);

/* Display: ATMA */
$handler = $view->new_display('pdf', 'ATMA', 'atma');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Acknowledgement - ATMA';
$handler->display->display_options['display_description'] = 'Acknowledgement for BTM ATM';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '';
$handler->display->display_options['style_plugin'] = 'pdf_unformatted';
$handler->display->display_options['row_plugin'] = 'pdf_fields';
$handler->display->display_options['row_options']['formats'] = array(
    'nothing_1' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '20',
            'font_family' => 'freeserif',
            'font_style' => array(
                'b' => 'b',
                'u' => 'u',
                'i' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'C',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_3' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'J',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'sid' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '10',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '14',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 'b',
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_10' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_9' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_1' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_2' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_4' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'value_5' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'nothing' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '5',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'nothing_2' => array(
        'position' => array(
            'object' => 'last_position',
            'corner' => 'top_left',
            'x' => '',
            'y' => '10',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'J',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'remote_addr' => array(
        'position' => array(
            'object' => 'header_footer',
            'corner' => 'bottom_left',
            'x' => '',
            'y' => '',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'C',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '1',
        ),
    ),
    'view' => array(
        'position' => array(
            'object' => 'page',
            'corner' => 'top_left',
            'x' => '100',
            'y' => '25',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'C',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '',
        ),
    ),
    'view_1' => array(
        'position' => array(
            'object' => 'page',
            'corner' => 'top_left',
            'x' => '100',
            'y' => '80',
            'width' => '',
            'height' => '',
        ),
        'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
                'b' => 0,
                'i' => 0,
                'u' => 0,
                'd' => 0,
                'o' => 0,
            ),
            'align' => 'C',
            'hyphenate' => NULL,
            'color' => '',
        ),
        'render' => array(
            'is_html' => 1,
            'custom_layout' => 0,
            'minimal_space' => '',
        ),
    ),
);
$handler->display->display_options['row_options']['leading_template'] = '0';
$handler->display->display_options['row_options']['template'] = '0';
$handler->display->display_options['row_options']['succeed_template'] = '0';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Submission Data :: Photograph */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Submission Data :: Photograph';
$handler->display->display_options['relationships']['data']['label'] = 'Submission Data :: Photograph';
$handler->display->display_options['relationships']['data']['webform_nid'] = '539';
$handler->display->display_options['relationships']['data']['webform_cid'] = '13';
/* Relationship: Submission Data :: Signature */
$handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
$handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_1']['field'] = 'data';
$handler->display->display_options['relationships']['data_1']['ui_name'] = 'Submission Data :: Signature';
$handler->display->display_options['relationships']['data_1']['label'] = 'Submission Data :: Signature';
$handler->display->display_options['relationships']['data_1']['webform_nid'] = '539';
$handler->display->display_options['relationships']['data_1']['webform_cid'] = '14';
/* Relationship: Submission Data :: Mobile */
$handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
$handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_2']['field'] = 'data';
$handler->display->display_options['relationships']['data_2']['ui_name'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data_2']['label'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data_2']['webform_nid'] = '539';
$handler->display->display_options['relationships']['data_2']['webform_cid'] = '2';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Raw Photograph no display */
$handler->display->display_options['fields']['data']['id'] = 'data';
$handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data']['field'] = 'data';
$handler->display->display_options['fields']['data']['relationship'] = 'data';
$handler->display->display_options['fields']['data']['ui_name'] = 'Raw Photograph no display';
$handler->display->display_options['fields']['data']['label'] = '';
$handler->display->display_options['fields']['data']['exclude'] = TRUE;
$handler->display->display_options['fields']['data']['element_label_colon'] = FALSE;
/* Field: Raw Signature no display */
$handler->display->display_options['fields']['data_1']['id'] = 'data_1';
$handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data_1']['field'] = 'data';
$handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
$handler->display->display_options['fields']['data_1']['ui_name'] = 'Raw Signature no display';
$handler->display->display_options['fields']['data_1']['label'] = '';
$handler->display->display_options['fields']['data_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['data_1']['element_label_colon'] = FALSE;
/* Field: Acknoledgement */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Acknoledgement';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Acknoledgement';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: Submission Data :: Post */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['ui_name'] = 'Submission Data :: Post';
$handler->display->display_options['fields']['value_3']['label'] = '';
$handler->display->display_options['fields']['value_3']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['value_3']['alter']['text'] = 'Application for the post of <strong>[value_3]</strong> on Contractual Basis for Agriculture Technology Management Agency(ATMA) in Paschim Medinipur.';
$handler->display->display_options['fields']['value_3']['custom_label'] = 'none';
$handler->display->display_options['fields']['value_3']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '8';
/* Field: Application ID */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['ui_name'] = 'Application ID';
$handler->display->display_options['fields']['sid']['label'] = 'Application ID';
$handler->display->display_options['fields']['sid']['separator'] = '';
/* Field: Applicant Name */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['ui_name'] = 'Applicant Name';
$handler->display->display_options['fields']['value']['label'] = 'Name';
$handler->display->display_options['fields']['value']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['value']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value']['webform_nid'] = '539';
$handler->display->display_options['fields']['value']['webform_cid'] = '5';
/* Field: Submission Data :: Gender */
$handler->display->display_options['fields']['value_10']['id'] = 'value_10';
$handler->display->display_options['fields']['value_10']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_10']['field'] = 'value';
$handler->display->display_options['fields']['value_10']['ui_name'] = 'Submission Data :: Gender';
$handler->display->display_options['fields']['value_10']['label'] = 'Gender';
$handler->display->display_options['fields']['value_10']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_10']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_10']['webform_cid'] = '6';
/* Field: Submission Data :: Date of Birth */
$handler->display->display_options['fields']['value_9']['id'] = 'value_9';
$handler->display->display_options['fields']['value_9']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_9']['field'] = 'value';
$handler->display->display_options['fields']['value_9']['ui_name'] = 'Submission Data :: Date of Birth';
$handler->display->display_options['fields']['value_9']['label'] = 'Date of Birth';
$handler->display->display_options['fields']['value_9']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_9']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_9']['webform_cid'] = '10';
/* Field: Fathers Name */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Fathers Name';
$handler->display->display_options['fields']['value_1']['label'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '9';
/* Field: Category */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['ui_name'] = 'Category';
$handler->display->display_options['fields']['value_2']['label'] = 'Category';
$handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '7';
/* Field: Mobile no */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['ui_name'] = 'Mobile no';
$handler->display->display_options['fields']['value_4']['label'] = 'Mobile No';
$handler->display->display_options['fields']['value_4']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_4']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '2';
/* Field: email */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['ui_name'] = 'email';
$handler->display->display_options['fields']['value_5']['label'] = 'E-Mail';
$handler->display->display_options['fields']['value_5']['custom_label'] = 'custom';
$handler->display->display_options['fields']['value_5']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '3';
/* Field: graduate/postgraduate */
$handler->display->display_options['fields']['value_6']['id'] = 'value_6';
$handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_6']['field'] = 'value';
$handler->display->display_options['fields']['value_6']['ui_name'] = 'graduate/postgraduate';
$handler->display->display_options['fields']['value_6']['label'] = 'Graduate/ Post Graduate';
$handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_6']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_6']['webform_cid'] = '32';
/* Field: Subject for ATM */
$handler->display->display_options['fields']['value_7']['id'] = 'value_7';
$handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_7']['field'] = 'value';
$handler->display->display_options['fields']['value_7']['ui_name'] = 'Subject for ATM';
$handler->display->display_options['fields']['value_7']['label'] = 'Subject';
$handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_7']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_7']['webform_cid'] = '53';
/* Field: Subject for BTM */
$handler->display->display_options['fields']['value_8']['id'] = 'value_8';
$handler->display->display_options['fields']['value_8']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_8']['field'] = 'value';
$handler->display->display_options['fields']['value_8']['ui_name'] = 'Subject for BTM';
$handler->display->display_options['fields']['value_8']['label'] = 'subject for BTM';
$handler->display->display_options['fields']['value_8']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_8']['webform_nid'] = '539';
$handler->display->display_options['fields']['value_8']['webform_cid'] = '52';
/* Field: Qualification */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Qualification';
$handler->display->display_options['fields']['nothing']['label'] = 'Qualification';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[value_6] [value_7] [value_8]';
/* Field: Instruction */
$handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
$handler->display->display_options['fields']['nothing_2']['table'] = 'views';
$handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Instruction';
$handler->display->display_options['fields']['nothing_2']['label'] = '';
$handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<p>Please submit the hard copy of this acknowledgement along with self attested copy of all related documents on or before <strong>02/02/2018 05:30PM</strong> to the following address:</p>

To,<br/>
The Project Director, ATMA, Paschim Medinipur<br/>
Office of the Deputy Director of Agriculture(Admn.),<br/>
Krishi Bhaban (2nd floor), Abash,<br/>
Paschim Medinipur, 721101 ';
$handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
/* Field: Submitted On(No Display) */
$handler->display->display_options['fields']['completed']['id'] = 'completed';
$handler->display->display_options['fields']['completed']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['completed']['field'] = 'completed';
$handler->display->display_options['fields']['completed']['ui_name'] = 'Submitted On(No Display)';
$handler->display->display_options['fields']['completed']['label'] = '';
$handler->display->display_options['fields']['completed']['exclude'] = TRUE;
$handler->display->display_options['fields']['completed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['completed']['date_format'] = 'custom';
$handler->display->display_options['fields']['completed']['custom_date_format'] = 'd/m/Y H:i A';
$handler->display->display_options['fields']['completed']['second_date_format'] = 'long';
/* Field: Submission Datetime &amp; IP */
$handler->display->display_options['fields']['remote_addr']['id'] = 'remote_addr';
$handler->display->display_options['fields']['remote_addr']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['remote_addr']['field'] = 'remote_addr';
$handler->display->display_options['fields']['remote_addr']['ui_name'] = 'Submission Datetime & IP';
$handler->display->display_options['fields']['remote_addr']['label'] = '';
$handler->display->display_options['fields']['remote_addr']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['remote_addr']['alter']['text'] = 'Submitted On: [completed] From IP Address: [remote_addr]';
$handler->display->display_options['fields']['remote_addr']['element_label_colon'] = FALSE;
/* Field: Photograph */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['ui_name'] = 'Photograph';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'file_view';
$handler->display->display_options['fields']['view']['display'] = 'block_1';
$handler->display->display_options['fields']['view']['arguments'] = '[!data]';
/* Field: Signature */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['ui_name'] = 'Signature';
$handler->display->display_options['fields']['view_1']['label'] = '';
$handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_1']['view'] = 'file_view';
$handler->display->display_options['fields']['view_1']['display'] = 'block_2';
$handler->display->display_options['fields']['view_1']['arguments'] = '[!data_1]';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Webform submissions: Node */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['min'] = '300';
$handler->display->display_options['filters']['nid']['value']['max'] = '301';
$handler->display->display_options['filters']['nid']['value']['value'] = '539';
$handler->display->display_options['filters']['nid']['group'] = 1;
/* Filter criterion: Webform submissions: Sid */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'Application ID:';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);
$handler->display->display_options['path'] = 'atma/acknowledgement';
$handler->display->display_options['menu']['title'] = 'Admit Card (NS)';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-online-applications-for-rec';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['acknowledgement'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Enter your Mobile Number to download admit'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Submission Data :: Photograph'),
    t('Submission Data :: Signature'),
    t('Submission Data :: Mobile'),
    t('Name of Applicant'),
    t('Father\'s Name -'),
    t('House No. / Area / Locality'),
    t('Vill / Town'),
    t('Post Office'),
    t('Police Station'),
    t('[value_2],[value_4],[value_5],[value_9]'),
    t('District'),
    t('State'),
    t('PIN Code'),
    t('[value_10], [value_12], [value_13]'),
    t('Name -'),
    t('Application ID:'),
    t('Mobile No'),
    t('ATMA'),
    t('Acknowledgement - ATMA'),
    t('Acknowledgement for BTM ATM'),
    t('Acknoledgement'),
    t('Application for the post of <strong>[value_3]</strong> on Contractual Basis for Agriculture Technology Management Agency(ATMA) in Paschim Medinipur.'),
    t('Application ID'),
    t('.'),
    t('Name'),
    t('Gender'),
    t('Date of Birth'),
    t('Father\'s Name'),
    t('Category'),
    t('E-Mail'),
    t('Graduate/ Post Graduate'),
    t('Subject'),
    t('subject for BTM'),
    t('Qualification'),
    t('[value_6] [value_7] [value_8]'),
    t('<p>Please submit the hard copy of this acknowledgement along with self attested copy of all related documents on or before <strong>02/02/2018 05:30PM</strong> to the following address:</p>

To,<br/>
The Project Director, ATMA, Paschim Medinipur<br/>
Office of the Deputy Director of Agriculture(Admn.),<br/>
Krishi Bhaban (2nd floor), Abash,<br/>
Paschim Medinipur, 721101 '),
    t('Submitted On: [completed] From IP Address: [remote_addr]'),
);
