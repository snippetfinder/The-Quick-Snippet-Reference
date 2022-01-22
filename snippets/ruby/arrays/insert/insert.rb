array = [3, 2, 1]
index = 1  # 0: first item, 1: second item...
item = 100
print(array)  # [3, 2, 1]
print("\n")
array = array[0,index] + [item] + array[index,array.length()]  # ≡
print(array)  # [3, 100, 2, 1]