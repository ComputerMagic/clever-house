<?php
if ( !empty( $_GET['light'] ))
{
 $light=$_GET['light'];
}else{
 $light='*';
}

$_GET=array();
$_POST=array();

$file = '../log/light.txt';
$current = file_get_contents($file);
$current .= $light;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/light.txt';
$current = file_get_contents($file);
$current = $light;
file_put_contents($file, $current);

?>