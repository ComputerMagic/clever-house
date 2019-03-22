<?php
if ( !empty( $_GET['dht22t'] ))
{
 $dht22t=$_GET['dht22t'];
}else{
 $dht22t='24.03';
}

$_GET=array();
$_POST=array();

$file = '../log/dht22t.txt';
$current = file_get_contents($file);
$current .= $dht22t;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/dht22t.txt';
$current = file_get_contents($file);
$current = $dht22t;
file_put_contents($file, $current);

?>