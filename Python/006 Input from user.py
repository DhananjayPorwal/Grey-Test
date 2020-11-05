print("Enter your lucky number")
inputFromUser1 = input()
print("Great, Your lucky number is", inputFromUser1)

# input() , default data type is string
print(type(inputFromUser1))

# To change th datatype of input we hava to use typecasting
print("Enter your lucky number")
inputFromUser2 = input()
print("Great, Your lucky number is", int(inputFromUser2) + 10)
