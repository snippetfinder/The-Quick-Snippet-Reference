array = [5, 4, 3, 2, 1]
index = 1  # 0: first item, 1: second item...
print(array)  # [5, 4, 3, 2, 1]
del array[index]  # ≡
print(array)  # [5, 3, 2, 1]

# many items:
array = [5, 4, 3, 2, 1]
start = 1  # 0: first item, 1: second item...
count = 3
print(array)  # [ 5, 4, 3, 2, 1 ]
del array[start:(start + count)]  # ≡
print(array)  # [ 5, 1 ]