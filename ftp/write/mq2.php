<?php
if ( !empty( $_GET['mq2'] ))
{
 $mq2=$_GET['mq2'];
}else{
 $mq2='*';
}

$_GET=array();
$_POST=array();

$file = '../log/mq2.txt';
$current = file_get_contents($file);
$current .= $mq2;
$current .= "/n";
file_put_contents($file, $current);

$file = '../now/mq2.txt';
$current = file_get_contents($file);
$current = $mq2;
file_put_contents($file, $current);

?>