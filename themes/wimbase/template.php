<?php
/**
 * @file
 * The primary PHP file for the Drupal Wim theme.
 *
 * This file should only contain light helper functions and point to stubs in
 * other files containing more complex functions.
 */

$includes = drupal_get_path('theme', 'wimbase') . '/includes/';

// Include preprocess.
require_once $includes . 'preprocess.inc';
// Include alter.
require_once $includes . 'alter.inc';
// Include theme.
require_once $includes . 'theme.inc';
