<?php
$arraay = [3, 2];
$item = 1;
var_export($arraay);  // array (0 => 3, 1 => 2, )
$arraay[] = $item;  // ≡
var_export($arraay);  // array (0 => 3, 1 => 2, 2 => 1, )
?>