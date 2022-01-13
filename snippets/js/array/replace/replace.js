var sourceArray = [3, 2, 1];
var destinationArray = ['a', 'b', 'c', 'd', 'e'];
var index = 1;  // 0: first item, 1: second item...
console.log(destinationArray);  // [ 'a', 'b', 'c', 'd', 'e' ]
destinationArray.splice(index, sourceArray.length, ...sourceArray);  // ≡
console.log(destinationArray);  // [ 'a', 3, 2, 1, 'e' ]