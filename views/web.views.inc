<?php

/**
 * @file
 * Using custom table in views.
 */

/**
 * Implements hook_views_data().
 * @return array
 */
function web_views_data() {
  $data = [];
  $data['eventdata']['table']['group'] = t('Event Information');
  $data['eventdata']['table']['base'] = [
    'field' => 'event_id',
    'title' => 'Event Id',
    'help' => 'Event Id',
  ];
  $data['eventdata']['event_id'] = [
    'title' => t('Event Id'),
    'help' => t('Event Id.'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_title'] = [
    'title' => t('Event Title'),
    'help' => t('Event Title'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_description'] = [
    'title' => t('Event Description'),
    'help' => t('Event Description'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_venue'] = [
    'title' => t('Event Venue'),
    'help' => t('Event Venue'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_startdate'] = [
    'title' => t('Event Start'),
    'help' => t('Event Start'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_enddate'] = [
    'title' => t('Event End'),
    'help' => t('Event End'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['eventdata']['event_banner_image'] = [
    'title' => t('Event image'),
    'help' => t('Event image'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  return $data;
}
