var array = [2, 3, 4, 3, 2, 5, 1];
var uniqueItems = [...new Set(array)];  // ≡
console.log(uniqueItems);  // [ 2, 3, 4, 5, 1 ]