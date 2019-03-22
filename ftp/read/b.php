<?php
$myLink = "../now/b.txt";
$myFile = fopen($myLink, 'r');
$myMeseng = fread($myFile, filesize($myLink));
fclose($myFile);
echo $myMeseng;
?>
