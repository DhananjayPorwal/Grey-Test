#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << ("You enter an even number.") << endl;
    }
    else
    {
        cout << ("You enter an odd number.") << endl;
    }
}