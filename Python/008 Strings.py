stringVar= "World is full of peace"
print(stringVar)

# len() function prints the length of string
print(len(stringVar))

# Hidden treasure

print(stringVar[0:4])
# This will print the 0 to 3 character of string i.e Worl, form this we can understand [initial:length of string]

# To skip an element in sting
print(stringVar[0:4:2]) # This will skip one element in string
# From this we can say that [initial : length of string : skip]

# Little more about this
print(stringVar[::])
print(stringVar[0::])
print(stringVar[:22:])
print(stringVar[::1])
print(stringVar[0:22:1])
# This all are same


# Strange Things
# In python string is cyclic
print(stringVar[-22::])

# Fun Fact
# To print string in reverse or inverted order
print(stringVar[::-1])

# Some more functions
stringVariable1="Programming builds logic"
print(stringVariable1.isalpha())
# isalpha() is used to check all string elements are alphabet or not, so it prints False
stringVariable2="Programmingbuildslogic"
print(stringVariable2.isalpha())
# Now it shows True because all strings elements are alphabet

stringVariable1="Programming builds logic"
print(stringVariable1.endswith("logic"))
# endswith() function is used to check our string is ends with xyz. If it matches the result then True else False
print(stringVariable1.endswith("blogic"))

# To count how many same elements we use in a string
print(stringVariable1.count("o"))

# To capitalise the first character of sting
stringVariable3="programming builds logic"
print(stringVariable1.capitalize())

# To convert all string characters to upper case
print(stringVariable1.upper())

# To convert all string characters to lower case
stringVariable4="PROGRAMMING BUILDS LOGIC"
print(stringVariable1.lower())

# To replace elements in string
stringVariable5="Shub are good boy"
print(stringVariable5.replace("are", "is"))
