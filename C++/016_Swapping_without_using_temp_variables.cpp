#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    cout << "Before Swapping a:" << a << " and b:" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping a:" << a << " and b:" << b << endl;
}