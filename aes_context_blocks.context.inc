<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function aes_context_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aes_content_blocks';
  $context->description = 'Sets content region blocks on non-edit pages. Includes content right and addtoany block';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gallery_photos-block_1' => array(
          'module' => 'views',
          'delta' => 'gallery_photos-block_1',
          'region' => 'content_right',
          'weight' => 0,
        ),
        'views-site_announcement-block_1' => array(
          'module' => 'views',
          'delta' => 'site_announcement-block_1',
          'region' => 'content_right',
          'weight' => 11,
        ),
        'views-page_images-block_1' => array(
          'module' => 'views',
          'delta' => 'page_images-block_1',
          'region' => 'content_right',
          'weight' => 12,
        ),
        'views-page_images-block_2' => array(
          'module' => 'views',
          'delta' => 'page_images-block_2',
          'region' => 'content_right',
          'weight' => 13,
        ),
        'addtoany-0' => array(
          'module' => 'addtoany',
          'delta' => 0,
          'region' => 'content_bottom',
          'weight' => 50,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets content region blocks on non-edit pages. Includes content right and addtoany block');
  t('path');
  $export['aes_content_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aes_front_blocks';
  $context->description = 'Sets default AES front page blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-social_media_links-block_1' => array(
          'module' => 'views',
          'delta' => 'social_media_links-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'extension_settings-9' => array(
          'module' => 'extension_settings',
          'delta' => 9,
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-site_announcement-block_2' => array(
          'module' => 'views',
          'delta' => 'site_announcement-block_2',
          'region' => 'content_right',
          'weight' => 10,
        ),
        'extension_settings-1' => array(
          'module' => 'extension_settings',
          'delta' => 1,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default AES front page blocks');
  t('path');
  $export['aes_front_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aes_sidebar_blocks';
  $context->description = 'Sets default AES sidebar blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ask_expert-0' => array(
          'module' => 'ask_expert',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-social_media_links-block_1' => array(
          'module' => 'views',
          'delta' => 'social_media_links-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default AES sidebar blocks');
  t('path');
  $export['aes_sidebar_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aes_sitewide_blocks';
  $context->description = 'Sets default sitewide blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'extension_settings-5' => array(
          'module' => 'extension_settings',
          'delta' => 5,
          'region' => 'header_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default sitewide blocks');
  t('path');
  $export['aes_sitewide_blocks'] = $context;

  return $export;
}
