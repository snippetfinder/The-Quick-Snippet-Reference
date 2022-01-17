sourceArray = [5, 4, 3, 2, 1]
destinationArray = ['a', 'b', 'c']
sourceStart = 1       # 0: first item, 1: second item...
destinationIndex = 2  # 2: third item...
count = 3
print(sourceArray)       # [ 5, 4, 3, 2, 1 ]
print(destinationArray)  # [ 'a', 'b', 'c' ]
destinationArray = destinationArray[0:destinationIndex] + sourceArray[sourceStart:(sourceStart + count)] + destinationArray[destinationIndex:]  # ≡
del sourceArray[sourceStart:(sourceStart + count)]                                                                                              # ≡
print(sourceArray)       # [ 5, 1 ]
print(destinationArray)  # [ 'a', 'b', 4, 3, 2, 'c' ]