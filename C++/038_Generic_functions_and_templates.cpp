#include <iostream>
using namespace std;
template <typename T>
void swapNumber(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3, b = 6;
    cout << "Before swapping: a = " << a << " and b = " << b << endl;
    swapNumber<int>(a, b);
    cout << "After swapping: a = " << a << " and b = " << b << endl;
    char c = '@', d = '$';
    cout << "Before swapping: c = " << c << " and d = " << d << endl;
    swapNumber<char>(c, d);
    cout << "After swapping: c = " << c << " and d = " << d << endl;
}