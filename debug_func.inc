<?php

function _debug_printtofile($filename, $a) {
  $fh = fopen($filename, 'a') or die('cant open file');
  $txt = print_r($a, TRUE);
  fwrite($fh, $txt);
  fclose($fh);
}