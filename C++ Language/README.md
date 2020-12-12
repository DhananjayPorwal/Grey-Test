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