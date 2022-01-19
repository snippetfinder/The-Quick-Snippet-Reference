<?php
$arraay = [];
if (empty($arraay)) echo "array is empty\n";    // ≡
$arraay[] = 100;  // add an item
if (!empty($arraay)) echo "array has items\n";  // ≡
array_splice($arraay, 0);  // clear the array
if (empty($arraay)) echo "array is empty again\n";
?>