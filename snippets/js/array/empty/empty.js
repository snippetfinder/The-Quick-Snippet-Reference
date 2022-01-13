var array = [];
if (!array.length) console.log('array is empty');  // ≡
array.push(100);  // add an item
if (array.length) console.log('array has items');  // ≡
array.splice(0);  // clear the array
if (!array.length) console.log('array is empty again');