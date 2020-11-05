myCart = ["phone", "shoes", "sleepers", "trimmer", "tshirt", "shirt", "lower", "pant", 214, 56.77]
print(myCart)
print(myCart[5])
print(myCart[7])
print(myCart[9])

numberList = [1, 4, 5, 2, 2, 5, 22, 66, 11, 0]
print(numberList)
print(numberList[6])

# Sorting
numberList.sort()
print(numberList)

# Reverse
numberList.reverse()
print(numberList)

# Slicing
numberListSlice = [3, 5, 6, 2, 6, 8] # Height of this list is 6
print(numberListSlice[:]) # [element : height : skip]
# Default element is 0 and height is max which is here 6
# Slicing always return list
# Skip better works on -1 to positive numbers
# If we use other negative numbers in skip, we got undesirable results

# To find maximum and minimum number in list
print(numberList)
print("Maximum number in the list is:")
print(max(numberList))
print("Minimum number in the list is:")
print(min(numberList))

# Append, which means add element in the last
print(numberList)
numberList.append(83)
print(numberList)

# Insert, Insert element in xyz position
print(numberList)
numberList.insert(2,777) # .insert(place, value)
print(numberList)

# Remove, To remove elemnet form list
print(numberList)
numberList.remove(777)
print(numberList)

# Pop, remove element form last
print(numberList)
numberList.pop()
print(numberList)

# Tuple
