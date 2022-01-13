var array = [5, 4, 3, 2, 1];
var start = 1;  // 0: first item, 1: second item...
var count = 3;
console.log(array);     // [ 5, 4, 3, 2, 1 ]
var arrayCut = array.splice(start, count);  // ≡
console.log(array);     // [ 5, 1 ]
console.log(arrayCut);  // [ 4, 3, 2 ]