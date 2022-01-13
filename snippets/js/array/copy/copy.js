// benchmark: https://stackoverflow.com/a/61523278
// libraries: https://stackoverflow.com/a/122704

// shallow copy (array and arrayCopy share references to the same items):
console.log('shallow:');
var array = [1, 2, ['a', 'b']];
console.log(array);      // [ 1, 2, [ 'a', 'b' ] ]
var arrayCopy = [...array];  // ≡
console.log(arrayCopy);  // [ 1, 2, [ 'a', 'b' ] ]
arrayCopy[2].push('c');
console.log(array);      // [ 1, 2, [ 'a', 'b', 'c' ] ]
console.log(arrayCopy);  // [ 1, 2, [ 'a', 'b', 'c' ] ]

// deep copy (array and arrayCopy have different objects for each item and sub-items; 
// non-trivial problem: will require special cases to handle certain objects):
console.log('deep:');
var array = [1, 2, ['a', 'b']];
console.log(array);      // [ 1, 2, [ 'a', 'b' ] ]
var arrayCopy = deepClone(array);  // ≡
console.log(arrayCopy);  // [ 1, 2, [ 'a', 'b' ] ]
arrayCopy[2].push('c');
console.log(array);      // [ 1, 2, [ 'a', 'b' ] ]
console.log(arrayCopy);  // [ 1, 2, [ 'a', 'b', 'c' ] ]

// snippet by: Brett Zamir, 2016, https://stackoverflow.com/users/271577/brett-zamir
// https://stackoverflow.com/questions/597588/how-do-you-clone-an-array-of-objects-in-javascript
// https://creativecommons.org/licenses/by-sa/3.0/
function deepClone (item) {        // ≡
    if (Array.isArray(item)) {
      var newArr = [];
      for (var i = item.length; i-- > 0;) {
        newArr[i] = deepClone(item[i]);
      }
      return newArr;
    }
    if (typeof item === 'function' && !(/\(\) \{ \[native/).test(item.toString())) {
      var obj;
      eval('obj = '+ item.toString());
      for (var k in item) {
        obj[k] = deepClone(item[k]);
      }
      return obj;
    }
    if (item && typeof item === 'object') {
      var obj = {};
      for (var k in item) {
        obj[k] = deepClone(item[k]);
      }
      return obj;
    }
    return item;
  }