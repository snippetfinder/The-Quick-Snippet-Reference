sourceArray = [5, 4, 3, 2, 1]
destinationArray = ['a', 'b', 'c']
sourceStart = 1       # 0: first item, 1: second item...
destinationIndex = 2  # 2: third item...
count = 3
print(sourceArray)       # [ 5, 4, 3, 2, 1 ]
print("\n")
print(destinationArray)  # [ 'a', 'b', 'c' ]
print("\n")
destinationArray = destinationArray[0,destinationIndex] + sourceArray[sourceStart,(sourceStart + count)] + destinationArray[destinationIndex, (destinationArray.length() - 1)]  # ≡
sourceArray.slice!(sourceStart,(sourceStart + count - 1))                                                                                            # ≡
print(sourceArray)       # [ 5, 1 ]
print("\n")
print(destinationArray)  # [ 'a', 'b', 4, 3, 2, 'c' ]