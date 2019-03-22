<?php
if ( !empty( $_GET['b1'] ))
{
 $relay=$_GET['b1'];
}else{
 $relay='*';
}


$_GET=array();
$_POST=array();


$file = '../now/b1.txt';
$current = file_get_contents($file);
$current = $relay;
file_put_contents($file, $current);
fclose($fh);
?>
