<?php
$arraay = [2, 3, 4, 3, 2, 5, 1];
$uniqueItems = array_unique($arraay);  // ≡
var_export($uniqueItems);  // array (0 => 2, 1 => 3, 2 => 4, 5 => 5, 6 => 1, )
?>