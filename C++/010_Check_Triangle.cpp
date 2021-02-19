#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter sides of triangle" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else
    {
        if (a != b && b != c && c != a)
        {
            cout << "Scalene Triangle" << endl;
        }
        else
        {
            cout << "Isosceles Triangle" << endl;
        }
    }
}