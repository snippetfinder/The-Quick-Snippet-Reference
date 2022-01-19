<?php
$arraay = [1, 2, 3, 4, 5];
var_export($arraay);  // array (0 => 1, 1 => 2, 2 => 3, 3 => 4, 4 => 5, )
$arraay = array_reverse($arraay);  // ≡
var_export($arraay);  // array (0 => 5, 1 => 4, 2 => 3, 3 => 2, 4 => 1, )
?>