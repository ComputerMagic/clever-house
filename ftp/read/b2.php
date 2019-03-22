<?php
$myLink = "../now/b2.txt";
$myFile = fopen($myLink, 'r');
$myMeseng = fread($myFile, filesize($myLink));
fclose($myFile);
echo $myMeseng;
?>
