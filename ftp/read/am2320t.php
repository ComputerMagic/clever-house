<?php
$myLink = "../now/am2320t.txt";
$myFile = fopen($myLink, 'r');
$myMeseng = fread($myFile, filesize($myLink));
fclose($myFile);
echo $myMeseng;
?>