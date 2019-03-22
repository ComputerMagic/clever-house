<?php
if ( !empty( $_GET['b'] ))
{
 $relay=$_GET['b'];
}else{
 $mq2='*';
}


$_GET=array();
$_POST=array();


$file = '../now/b.txt';
$current = file_get_contents($file);
$current = $relay;
file_put_contents($file, $current);
fclose($fh);
?>
