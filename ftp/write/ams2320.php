<?php

if ( !empty( $_GET['ams2320'] ))
{
 $ams2320=$_GET['ams2320'];
}else{
 $ams2320='*';
}

$_GET=array();
$_POST=array();


$file = '../log/ams2320.txt';
$current = file_get_contents($file);
$current .= $ams2320;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/ams2320.txt';
$current = file_get_contents($file);
$current = $ams2320;
file_put_contents($file, $current);

?>