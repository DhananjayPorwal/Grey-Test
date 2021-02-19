#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int length;
    char symbol;
    cout << "Length : ";
    cin >> length;
    cout << "Symbol : ";
    cin >> symbol;
    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }
}