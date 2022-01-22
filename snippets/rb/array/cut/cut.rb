array = [5, 4, 3, 2, 1]
start = 1  # 0: first item, 1: second item...
count = 3
print(array)     # [ 5, 4, 3, 2, 1 ]
print("\n")
arrayCut = array[start,(start + count - 1)] 
array.slice!(start,(start + count - 1))
print(array)     # [ 5, 1 ]
print("\n")
print(arrayCut)  # [ 4, 3, 2 ]