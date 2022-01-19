<?php
$arraay = [1, 2.3, 'abc', -5, "123"];
$separator = '-';
$string = implode($separator, $arraay);  // ≡
var_export($string);  // '1-2.3-abc--5-123'
?>