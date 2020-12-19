#include <iostream>
using namespace std;
int main()
{
    // Logical Operators
    int a = 5, b = 6, c = 7;
    cout << "The value of ((a=b )AND(c>a)) is " << ((a = b) || (c > a)) << endl;
    cout << "The value of ((a=b )OR(c>a)) is " << ((a = b) && (c > a)) << endl;
    cout << "The value of NOT(a=b ) is " << !(a = b) << endl;
    return 0;
}