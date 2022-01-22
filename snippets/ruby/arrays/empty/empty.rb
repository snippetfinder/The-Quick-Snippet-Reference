array = []
if (not array.length()) 
    print("array is empty")  # ≡
end

array.append(100)  # add an item
if (array.length())
    print("array has items\n")     # ≡
end

array.clear()

if (array.length() == 0)
    print("array is empty again\n")
end