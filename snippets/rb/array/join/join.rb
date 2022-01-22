separator = '-'

# items are strings only:
array = ['abc', "xyz", '123']
string = array.join('-')                       # ≡
print(string)  # abc-xyz-123
print("\n")
# not all items are strings:
array = [1, 2.3, 'abc', -5, "123"]
string = array.join('-')  # ≡
print(string)  # 1-2.3-abc--5-123