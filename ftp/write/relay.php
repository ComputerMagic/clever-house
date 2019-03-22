<?php
if ( !empty( $_GET['relay'] ))
{
 $relay=$_GET['relay'];
}else{
 $mq2='*';
}


$_GET=array();
$_POST=array();


$file = '../now/relay.txt';
$current = file_get_contents($file);
$current = $relay;
file_put_contents($file, $current);
fclose($fh);
 header("Location: ../relay/index.html");
?>