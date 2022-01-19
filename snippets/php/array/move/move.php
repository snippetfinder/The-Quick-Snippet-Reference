<?php
$sourceArraay = [5, 4, 3, 2, 1];
$destinationArraay = ['a', 'b', 'c'];
$sourceStart = 1;       // 0: first item, 1: second item...
$destinationIndex = 2;  // 2: third item...
$count = 3;
var_export($sourceArraay);       // array (0 => 5, 1 => 4, 2 => 3, 3 => 2, 4 => 1, )
var_export($destinationArraay);  // array (0 => 'a', 1 => 'b', 2 => 'c', )
array_splice($destinationArraay, $destinationIndex, 0, array_splice($sourceArraay, $sourceStart, $count));  // ≡
var_export($sourceArraay);       // array (0 => 5, 1 => 1, )
var_export($destinationArraay);  // array (0 => 'a', 1 => 'b', 2 => 4, 3 => 3, 4 => 2, 5 => 'c', )
?>