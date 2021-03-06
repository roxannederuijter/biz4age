<?php
/**
 * @file
 * default_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function default_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-about-us'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'about-us',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-about-us-vervolg'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'about-us-vervolg',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>
contact
about/biz4age-news
about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bean-conference'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'conference',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-conference-vervolg'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'conference-vervolg',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>
contact
about/biz4age-news
about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bean-frontpage-banner'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'frontpage-banner',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-magazine'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'magazine',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-magazine-vervolg'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'magazine-vervolg',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>
contact
about/biz4age-news
about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-footer_contact'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'BIZ4AGE',
    'visibility' => 0,
  );

  $export['block-googlemaps'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'googlemaps',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_fourth',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-latestnews'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'latestnews',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-latestnewstwee'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'latestnewstwee',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact
about/biz4age-news
about/biz4age-conference
<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Navigate to',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 5,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['twitter_signin-0'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 0,
    'module' => 'twitter_signin',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clone_of_tweets-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clone_of_tweets-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-clone_of_tweets-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clone_of_tweets-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact
about/biz4age-news
about/biz4age-conference
<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-conferences-conferences_pdf'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'conferences-conferences_pdf',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-eacf4df3f723a13c79c223e40b8e6ded'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eacf4df3f723a13c79c223e40b8e6ded',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Conference photos',
    'visibility' => 1,
  );

  $export['views-magazine-conferences_pdf'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'magazine-conferences_pdf',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-news-news'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-news',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact
about/biz4age-news
about/biz4age-conference
<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-news-news_frontpage'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-news_frontpage',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-news-newspage'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-newspage',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/biz4age-news',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-partners-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'partners-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-partners-partner_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'partners-partner_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/biz4age-partners',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-projecten-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'projecten-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-projecten-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'projecten-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
biz4age-projects
contact
about/biz4age-news
about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-projecten-projects_page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'projecten-projects_page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'biz4age-projects',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-tweets-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tweets-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-video_s-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'video_s-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Watch our videos',
    'visibility' => 1,
  );

  $export['views-video_s-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'video_s-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/biz4age-conference',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Watch our videos',
    'visibility' => 1,
  );

  return $export;
}
