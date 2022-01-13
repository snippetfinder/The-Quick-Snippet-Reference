// shallow compare:
console.log('shallow:');
var item1 = 10;
var item2 = 5;
if (item1 !== item2) console.log('items are different');  // ≡
item2 = 10;
if (item1 === item2) console.log('items are equal');      // ≡

// deep compare #1 (non-trivial problem: will require special cases to handle certain objects):
console.log('deep #1:');
item1 = [1, 2, ['a', 'b', {'c': 2.3, 'd': 3.14}]];
item2 = [1, 2, ['a', 'b', {'c': 2.3}]];
if (JSON.stringify(item1) !== JSON.stringify(item2)) console.log('items are different');  // ≡
item2[2][2]['d'] = 3.14;
if (JSON.stringify(item1) === JSON.stringify(item2)) console.log('items are equal');      // ≡

// deep compare #2 (non-trivial problem: will require special cases to handle certain objects):
console.log('deep #2:');
item2 = [1, 2, ['a', 'b', {'c': 2.3}]];
if (!deepCompare(item1, item2)) console.log('items are different');  // ≡
item2[2][2]['d'] = 3.14;
if (deepCompare(item1, item2)) console.log('items are equal');       // ≡

// snippet by: crazyx, 2009, https://stackoverflow.com/users/140277/crazyx
// https://stackoverflow.com/questions/1068834/object-comparison-in-javascript
// https://creativecommons.org/licenses/by-sa/3.0/
function deepCompare () {                                            // ≡
    var i, l, leftChain, rightChain;
  
    function compare2Objects (x, y) {
      var p;
  
      // remember that NaN === NaN returns false
      // and isNaN(undefined) returns true
      if (isNaN(x) && isNaN(y) && typeof x === 'number' && typeof y === 'number') {
           return true;
      }
  
      // Compare primitives and functions.     
      // Check if both arguments link to the same object.
      // Especially useful on the step where we compare prototypes
      if (x === y) {
          return true;
      }
  
      // Works in case when functions are created in constructor.
      // Comparing dates is a common scenario. Another built-ins?
      // We can even handle functions passed across iframes
      if ((typeof x === 'function' && typeof y === 'function') ||
         (x instanceof Date && y instanceof Date) ||
         (x instanceof RegExp && y instanceof RegExp) ||
         (x instanceof String && y instanceof String) ||
         (x instanceof Number && y instanceof Number)) {
          return x.toString() === y.toString();
      }
  
      // At last checking prototypes as good as we can
      if (!(x instanceof Object && y instanceof Object)) {
          return false;
      }
  
      if (x.isPrototypeOf(y) || y.isPrototypeOf(x)) {
          return false;
      }
  
      if (x.constructor !== y.constructor) {
          return false;
      }
  
      if (x.prototype !== y.prototype) {
          return false;
      }
  
      // Check for infinitive linking loops
      if (leftChain.indexOf(x) > -1 || rightChain.indexOf(y) > -1) {
           return false;
      }
  
      // Quick checking of one object being a subset of another.
      // todo: cache the structure of arguments[0] for performance
      for (p in y) {
          if (y.hasOwnProperty(p) !== x.hasOwnProperty(p)) {
              return false;
          }
          else if (typeof y[p] !== typeof x[p]) {
              return false;
          }
      }
  
      for (p in x) {
          if (y.hasOwnProperty(p) !== x.hasOwnProperty(p)) {
              return false;
          }
          else if (typeof y[p] !== typeof x[p]) {
              return false;
          }
  
          switch (typeof (x[p])) {
              case 'object':
              case 'function':
  
                  leftChain.push(x);
                  rightChain.push(y);
  
                  if (!compare2Objects (x[p], y[p])) {
                      return false;
                  }
  
                  leftChain.pop();
                  rightChain.pop();
                  break;
  
              default:
                  if (x[p] !== y[p]) {
                      return false;
                  }
                  break;
          }
      }
  
      return true;
    }
  
    if (arguments.length < 1) {
      return true; //Die silently? Don't know how to handle such case, please help...
      // throw "Need two or more arguments to compare";
    }
  
    for (i = 1, l = arguments.length; i < l; i++) {
  
        leftChain = []; //Todo: this can be cached
        rightChain = [];
  
        if (!compare2Objects(arguments[0], arguments[i])) {
            return false;
        }
    }
  
    return true;
  }  