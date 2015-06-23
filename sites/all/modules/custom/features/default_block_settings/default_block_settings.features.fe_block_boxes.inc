<?php
/**
 * @file
 * default_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function default_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'biz4age contact';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_contact';
  $fe_block_boxes->body = '<p>Anglia Ruskin University<br />
East Road<br />
Cambridge<br />
CB1 1PT<br />
UK<br />
&nbsp;<br />
Telephone: +44 (0) 1223 69 2238<br />
Email: ruth.mcnally@anglia.ac.uk</p>
';

  $export['footer_contact'] = $fe_block_boxes;

  return $export;
}
