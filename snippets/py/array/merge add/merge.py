array1 = [3, 2, 1]
array2 = [100, 200, 300]
array1.extend(array2)    # ≡
print(array1)  # [ 3, 2, 1, 100, 200, 300 ]

# add:
array1 = [3, 2, 1]
array2 = [100, 200, 300]
array = array1 + array2  # ≡
print(array)  # [ 3, 2, 1, 100, 200, 300 ]