separator = '-'

# items are strings only:
array = ['abc', "xyz", '123']
string = separator.join(array)                        # ≡
print(string)  # abc-xyz-123

# not all items are strings:
array = [1, 2.3, 'abc', -5, "123"]
string = separator.join(str(item) for item in array)  # ≡
print(string)  # 1-2.3-abc--5-123