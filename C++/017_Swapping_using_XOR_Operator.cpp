#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 6;
    cout << "Before Swapping a:" << x << " and b:" << y << endl;
    x ^= y;
    y ^= x;
    x ^= y;
    cout << "After Swapping a:" << x << " and b:" << y << endl;
}

// https://www.geeksforgeeks.org/python-program-to-swap-two-numbers-without-using-third-variable/
