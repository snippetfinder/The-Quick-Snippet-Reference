var sourceArray = [5, 4, 3, 2, 1];
var destinationArray = ['a', 'b', 'c'];
var sourceIndex = 1;       // 0: first item, 1: second item...
var destinationIndex = 2;  // 2: third item...
var count = 3;
console.log(sourceArray);       // [ 5, 4, 3, 2, 1 ]
console.log(destinationArray);  // [ 'a', 'b', 'c' ]
destinationArray.splice(destinationIndex, 0, ...sourceArray.splice(sourceIndex, count));  // ≡
console.log(sourceArray);       // [ 5, 1 ]
console.log(destinationArray);  // [ 'a', 'b', 4, 3, 2, 'c' ]