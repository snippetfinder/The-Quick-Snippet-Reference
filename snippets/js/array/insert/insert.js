var array = [3, 2, 1];
var index = 1;  // 0: first item, 1: second item...
var item = 100;
console.log(array);  // [ 3, 2, 1 ]
array.splice(index, 0, item);  // ≡
console.log(array);  // [ 3, 100, 2, 1 ]