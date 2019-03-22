<?php
if ( !empty( $_GET['b2'] ))
{
 $relay=$_GET['b2'];
}else{
 $relay='*';
}


$_GET=array();
$_POST=array();


$file = '../now/b2.txt';
$current = file_get_contents($file);
$current = $relay;
file_put_contents($file, $current);
fclose($fh);
?>
