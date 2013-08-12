<?php
/**
 * @file
 * aa_social.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function aa_social_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Cargoh',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cd963c47-2735-4ff7-800a-f42bc9bb4e99',
  'type' => 'social',
  'language' => 'und',
  'created' => 1376161622,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1e3d7bc9-8cf7-4979-a821-e7309a3af510',
  'revision_uid' => 1,
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 71,
        'alt' => '',
        'title' => '',
        'width' => 512,
        'height' => 512,
        'uid' => 1,
        'filename' => 'cargoh-512.png',
        'uri' => 'public://images/links/cargoh-512.png',
        'filemime' => 'image/png',
        'filesize' => 36907,
        'status' => 1,
        'timestamp' => 1376161622,
        'uuid' => '5204fbd7-6d92-49a2-bc4e-8c6953119529',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.cargoh.com/store/bucce',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 21:07:02 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Blog',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '89293c3f-6716-4c3b-a673-997437df1cb8',
  'type' => 'social',
  'language' => 'und',
  'created' => 1376161712,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6c5b51a-00de-41aa-996c-c9c08cb9399e',
  'revision_uid' => 1,
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 73,
        'alt' => '',
        'title' => '',
        'width' => 512,
        'height' => 512,
        'uid' => 1,
        'filename' => 'blogger-512.png',
        'uri' => 'public://images/links/blogger-512.png',
        'filemime' => 'image/png',
        'filesize' => 8939,
        'status' => 1,
        'timestamp' => 1376161712,
        'uuid' => '3e32f217-cc4b-4d25-be5b-b93aa1e6212f',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.twostepsinwonderland.blogspot.com/',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 21:08:32 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Facebook',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '36fea326-6449-4e45-b90e-2ad0d7bfd009',
  'type' => 'social',
  'language' => 'und',
  'created' => 1376161035,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ca6ae510-3b7f-4204-ad33-4e06da0a7d91',
  'revision_uid' => 1,
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 70,
        'alt' => '',
        'title' => '',
        'width' => 512,
        'height' => 512,
        'uid' => 1,
        'filename' => 'facebook-512.png',
        'uri' => 'public://images/links/facebook-512.png',
        'filemime' => 'image/png',
        'filesize' => 7040,
        'status' => 1,
        'timestamp' => 1376161035,
        'uuid' => '86db5800-f38d-402b-9f2b-e60431bd47ed',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.facebook.com/pages/Two-Steps-In-Wonderland/164923717203',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 20:57:15 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Linkedin',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '11b700d3-50e1-44a4-a183-64919c6b6a10',
  'type' => 'social',
  'language' => 'und',
  'created' => 1376161678,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e70147da-33a8-4ec9-9ad1-a38838414101',
  'revision_uid' => 1,
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 72,
        'alt' => '',
        'title' => '',
        'width' => 512,
        'height' => 512,
        'uid' => 1,
        'filename' => 'linkedin-512.png',
        'uri' => 'public://images/links/linkedin-512.png',
        'filemime' => 'image/png',
        'filesize' => 8070,
        'status' => 1,
        'timestamp' => 1376161678,
        'uuid' => '9ffe49c6-1486-4359-adba-f7063895f781',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://it.linkedin.com/pub/alice-anselmi/1a/400/a4b',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 21:07:58 +0200',
);
  return $nodes;
}
