array = []
if (not len(array)): print('array is empty')  # ≡
array.append(100)  # add an item
if (len(array)): print('array has items')     # ≡
del array[:]  # clear the array
if (not len(array)): print('array is empty again')