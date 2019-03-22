<?php
if ( !empty( $_GET['b3'] ))
{
 $relay=$_GET['b3'];
}else{
 $relay='*';
}


$_GET=array();
$_POST=array();


$file = '../now/b3.txt';
$current = file_get_contents($file);
$current = $relay;
file_put_contents($file, $current);
fclose($fh);
?>
