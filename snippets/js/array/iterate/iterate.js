var array = [5, 4, 3, 2, 1];
for (var index in array) console.log(index, ':', array[index]);  // 0 : 5  1 : 4  ...  4 : 1  ≡
for (var item of array) console.log(item);                       // 5  4  ...  1              ≡