#include <iostream>
using namespace std;
int main()
{
    int number, factorial = 1;
    cout << "Enter a number" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << factorial;
}