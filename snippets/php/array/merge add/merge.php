<?php
$arraay1 = [3, 2, 1];
$arraay2 = [100, 200, 300];

$arraay = array_merge($arraay1, $arraay2);  // ≡
var_export($arraay);  // array (0 => 3, 1 => 2, 2 => 1, 3 => 100, 4 => 200, 5 => 300, )
?>