<?php
$myLink = "../now/dht22h.txt";
$myFile = fopen($myLink, 'r');
$myMeseng = fread($myFile, filesize($myLink));
fclose($myFile);
echo $myMeseng;
?>