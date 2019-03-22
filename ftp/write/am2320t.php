<?php
if ( !empty( $_GET['am2320t'] ))
{
 $am2320t=$_GET['am2320t'];
}else{
 $am2320t='*';
}

$_GET=array();
$_POST=array();

$file = '../log/am2320t.txt';
$current = file_get_contents($file);
$current .= $am2320t;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/am2320t.txt';
$current = file_get_contents($file);
$current = $am2320t;
file_put_contents($file, $current);

?>