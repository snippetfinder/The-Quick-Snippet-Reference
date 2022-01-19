<?php
$arraay = [1, 2, 3];
var_export($arraay);  // array (0 => 1, 1 => 2, 2 => 3, )
array_splice($arraay, 0);  // ≡
var_export($arraay);  // array ()
?>