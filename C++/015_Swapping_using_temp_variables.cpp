#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    cout << "Before Swapping a:" << a << " and b:" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping a:" << a << " and b:" << b << endl;
}