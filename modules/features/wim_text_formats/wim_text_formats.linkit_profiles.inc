<?php
/**
 * @file
 * wim_text_formats.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function wim_text_formats_default_linkit_profiles() {
  $export = [];

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'default';
  $linkit_profile->admin_title = 'default';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = [
    'text_formats' => [
      'full_html' => 'full_html',
      'filtered_html' => 'filtered_html',
      'plain_text' => 0,
    ],
    'button_text' => 'Search',
    'search_plugins' => [
      'entity:bean' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:user' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:node' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'entity:taxonomy_term' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:file' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'entity:menu_link' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
    ],
    'entity:bean' => [
      'result_description' => '',
    ],
    'entity:node' => [
      'result_description' => '',
      'bundles' => [
        'agenda' => 0,
        'page' => 0,
        'faq' => 0,
        'news' => 0,
        'person' => 0,
        'product' => 0,
        'subject_page' => 0,
        'webform' => 0,
      ],
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ],
    'entity:file' => [
      'result_description' => '',
      'bundles' => [
        'document' => 'document',
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ],
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => [
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ],
    ],
    'entity:taxonomy_term' => [
      'result_description' => '',
      'bundles' => [
        'tags' => 0,
        'faq_categories' => 0,
        'news_categories' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'entity:user' => [
      'result_description' => '',
    ],
    'entity:menu_link' => [
      'result_description' => '',
      'bundles' => [
        'devel' => 0,
        'main-menu' => 0,
        'management' => 0,
        'menu-meta-menu' => 0,
        'navigation' => 0,
        'menu-social-media' => 0,
        'menu-top-tasks' => 0,
        'user-menu' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'insert_plugin' => [
      'url_method' => '3',
    ],
    'attribute_plugins' => [
      'class' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'rel' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'title' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'accesskey' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'id' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'target' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'alt' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
    ],
    'autocomplete' => [
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ],
  ];
  $export['default'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'linked_keywords';
  $linkit_profile->admin_title = 'Linked keywords';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = [
    'button_text' => 'Search',
    'search_plugins' => [
      'entity:menu_link' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:user' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:taxonomy_term' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:file' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:node' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'entity:bean' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
    ],
    'entity:bean' => [
      'result_description' => '',
    ],
    'entity:node' => [
      'result_description' => '',
      'bundles' => [
        'agenda' => 0,
        'page' => 0,
        'faq' => 0,
        'linked_keywords' => 0,
        'news' => 0,
        'person' => 0,
        'product' => 0,
        'subject_page' => 0,
        'webform' => 0,
      ],
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ],
    'entity:file' => [
      'result_description' => '',
      'bundles' => [
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ],
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => [
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ],
    ],
    'entity:taxonomy_term' => [
      'result_description' => '',
      'bundles' => [
        'tags' => 0,
        'faq_categories' => 0,
        'news_categories' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'entity:user' => [
      'result_description' => '',
    ],
    'entity:menu_link' => [
      'result_description' => '',
      'bundles' => [
        'devel' => 0,
        'main-menu' => 0,
        'management' => 0,
        'menu-meta-menu' => 0,
        'navigation' => 0,
        'menu-social-media' => 0,
        'menu-top-tasks' => 0,
        'user-menu' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'insert_plugin' => [
      'plugin' => 'raw_url',
      'url_method' => '1',
    ],
    'attribute_plugins' => [
      'title' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'alt' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'id' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'class' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'accesskey' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'rel' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'target' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
    ],
    'autocomplete' => [
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ],
  ];
  $export['linked_keywords'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'menus';
  $linkit_profile->admin_title = 'Menus';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '3';
  $linkit_profile->data = [
    'text_formats' => [
      'full_html' => 0,
      'filtered_html' => 0,
      'plain_text' => 0,
    ],
    'button_text' => 'Search',
    'search_plugins' => [
      'entity:bean' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:user' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:node' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'entity:taxonomy_term' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:file' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'entity:menu_link' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
    ],
    'entity:bean' => [
      'result_description' => '',
    ],
    'entity:node' => [
      'result_description' => '',
      'bundles' => [
        'agenda' => 0,
        'page' => 0,
        'faq' => 0,
        'news' => 0,
        'person' => 0,
        'product' => 0,
        'subject_page' => 0,
        'webform' => 0,
      ],
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ],
    'entity:file' => [
      'result_description' => '',
      'bundles' => [
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ],
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => [
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ],
    ],
    'entity:taxonomy_term' => [
      'result_description' => '',
      'bundles' => [
        'tags' => 0,
        'faq_categories' => 0,
        'news_categories' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'entity:user' => [
      'result_description' => '',
    ],
    'entity:menu_link' => [
      'result_description' => '',
      'bundles' => [
        'devel' => 0,
        'main-menu' => 0,
        'management' => 0,
        'menu-meta-menu' => 0,
        'navigation' => 0,
        'menu-social-media' => 0,
        'menu-top-tasks' => 0,
        'user-menu' => 0,
      ],
      'group_by_bundle' => 0,
    ],
    'insert_plugin' => [
      'plugin' => 'raw_url',
      'url_method' => 1,
    ],
    'attribute_plugins' => [
      'rel' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'target' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'accesskey' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'class' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'title' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
      'id' => [
        'enabled' => 0,
        'weight' => '-10',
      ],
      'alt' => [
        'enabled' => 1,
        'weight' => '-10',
      ],
    ],
    'autocomplete' => [
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ],
  ];
  $export['menus'] = $linkit_profile;

  return $export;
}
