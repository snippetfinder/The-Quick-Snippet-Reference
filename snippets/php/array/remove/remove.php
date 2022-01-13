<?php
$arraay = [5, 4, 3, 2, 1];
$start = 1;  // 0: first item, 1: second item...
$count = 3;
var_export($arraay);        // array (0 => 5, 1 => 4, 2 => 3, 3 => 2, 4 => 1, )
$removedItems = array_splice($arraay, $start, $count);  // ≡
var_export($arraay);        // array (0 => 5, 1 => 1, )
var_export($removedItems);  // array (0 => 4, 1 => 3, 2 => 2, )
?>