# C++ Programming

This language is developed by Bjarne Stroustrup in 1979. C++ is extension of C language.

**Benefits of C++**
+ Fast Programs.
+ More control over system resources.
+ Memory Management.
+ High Performance.

_**Major C++ Updates**_<br>
|   Name    |  Year |
|-----------|-------|
| C++ 11    | 2011  |
| C++ 14    | 2014  |
| C++ 17    | 2017  |
| C++ 20    | 2020  |

### Basic C++ Program

```C++
#include<iostream> 
//iostream is header file
using namespace std;
//cout funtion is a part of std namespace in iostream
int main()
// main funtion is starting point of program
// int main means we want integer value in return at the end of program
{
    // Programs written inside this curly brackets
    cout<<"Hello World"<<endl;
    // cout is use to print statement and endl is used to enter new line
    // Semicolon(;) is use to end the instruction
    return 0;
    // return 0 inplies that programs runs correctly and return integer value 0
}
```

[Difference Between High-Level Language and Low-Level Language](https://www.w3schools.in/difference-between-high-level-language-and-low-level-language/)

## Variables
+ Variable is a container to holds data.

Implimentation
```C++
DATA_TYPE VAR_NAME = VALUE
int a = 6;
```

👉 Based on scope, Variables can be classified into two types -
+ Local-Variable : Declared inside the braces of any funtion & can be accessed only form there.
+ Global-Variable : Declared outside any function & can be accessed form anywhere.

🌟 Global & Local Variables may have same name.

## Data Type

|   Built-in    |   User-Define    |   Derived    |
|---------------|---------------|---------------|
|int|struct|array|
|float|enum|function|
|char|union|pointer|
|double|||
|bool|||

## Basics of Input/Output

iostream: Input Output STREAM

+ Stream: Sequence of bytes corresponding to input and output.
+ Input stream: Direction of flow of bytes takes place form input device (like keyboard) to the main memory.
+ Output stream: Direction of flow of bytes takes place form main memory to output device (like Monitor).

> "<<" is Insertion Operator<br>
> ">>" is Extraction Operator

## Header Files

+ System-Define: Comes with compiler (like iostream).
+ User-Define: Writtem by programmer (like "xyz.h").

## Operator

### Arithmetic Operators

|Name  |Symbol|
|------|------|
|Addition|   +|
|Subtraction|   -|
|Multiplication|   *|
|Division|   /|
|Modulus|   %|
|Pre-Increment|   ++a|
|Post-Increment|   a++| 
|Pre-Decrement|   --a|
|Post-Decrement|   a--| <br>
<br>

### Assignment Operators

|Name  |Symbol|
|------|------|
|Simple Assign|     =|
|Add and Assign|     +=|
|Sub and Assign|     -=|
|Multi and Assign|     *=|
|Div and Assign|     /=|
|Mod and Assign|     %=|

### Logical Operators

|Name  |Symbol|
|------|------|
|AND| &&|
|OR| II|
|NOT| !|

🌟 Scope resolution operator (::) is used to insert the value of global variable. For example:
``` C++
#include <iostream>
using namespace std;
int c= 214;
int main()
{
    int a, b, c;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is " << c << endl;
    cout << "The global value of c is " << ::c << endl;
    return 0;
}
```
