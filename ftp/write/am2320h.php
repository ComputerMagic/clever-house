<?php
if ( !empty( $_GET['am2320h'] ))
{
 $am2320h=$_GET['am2320h'];
}else{
 $am2320h='*';
}

$_GET=array();
$_POST=array();

$file = '../log/am2320h.txt';
$current = file_get_contents($file);
$current .= $am2320h;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/am2320h.txt';
$current = file_get_contents($file);
$current = $am2320h;
file_put_contents($file, $current);

?>