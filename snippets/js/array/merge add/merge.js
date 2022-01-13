var array1 = [3, 2, 1];
var array2 = [100, 200, 300];

var array = array1.concat(array2);   // ≡
console.log(array);  // [ 3, 2, 1, 100, 200, 300 ]

// expand:
var array = [...array1, ...array2];  // ≡
console.log(array);  // [ 3, 2, 1, 100, 200, 300 ]