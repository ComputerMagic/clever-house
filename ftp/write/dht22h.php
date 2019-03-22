<?php
if ( !empty( $_GET['dht22h'] ))
{
 $dht22h=$_GET['dht22h'];
}else{
 $dht22h='*';
}

$_GET=array();
$_POST=array();

$file = '../log/dht22h.txt';
$current = file_get_contents($file);
$current .= $dht22h;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/dht22h.txt';
$current = file_get_contents($file);
$current = $dht22h;
file_put_contents($file, $current);

?>