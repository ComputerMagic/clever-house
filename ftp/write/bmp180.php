<?php

if ( !empty( $_GET['bmp180'] ))
{
 $bmp180=$_GET['bmp180'];
}else{
 $bmp180='*';
}

$_GET=array();
$_POST=array();

$file = '../log/bmp180.txt';
$current = file_get_contents($file);
$current .= $bmp180;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/bmp180.txt';
$current = file_get_contents($file);
$current = $bmp180;
file_put_contents($file, $current);

?>