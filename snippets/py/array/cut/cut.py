array = [5, 4, 3, 2, 1]
start = 1  # 0: first item, 1: second item...
count = 3
print(array)     # [ 5, 4, 3, 2, 1 ]
arrayCut = array[start:start + count]  # ≡
del array[start:start + count]         # ≡
print(array)     # [ 5, 1 ]
print(arrayCut)  # [ 4, 3, 2 ]