<?php
/**
 * @file
 * default_imagestijlen.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_imagestijlen_image_default_styles() {
  $styles = array();

  // Exported image style: project.
  $styles['project'] = array(
    'label' => 'project',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 205,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
