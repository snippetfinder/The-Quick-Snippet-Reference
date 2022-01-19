<?php
$arraay = [5, 4, 3, 2, 1];
for ($index = 0; $index < count($arraay); $index++) echo $arraay[$index], ' ';  // 5 4 3 2 1            ≡
foreach ($arraay as $index => $item) echo $index, ':', $item, ' ';              // 0:5 1:4 2:3 3:2 4:1  ≡
?>