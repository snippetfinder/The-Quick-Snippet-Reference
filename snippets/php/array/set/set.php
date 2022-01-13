<?php
$arraay = [3, 2, 1];
$index = 1;  // 0: first item, 1: second item...
$item = 100;
var_export($arraay);  // array (0 => 3, 1 => 2, 2 => 1, )
$arraay[$index] = $item;  // ≡
var_export($arraay);  // array (0 => 3, 1 => 100, 2 => 1, )
?>