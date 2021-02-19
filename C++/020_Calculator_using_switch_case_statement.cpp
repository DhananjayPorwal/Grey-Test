#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;
    cout << "Xenon Calculator" << endl;
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    case '%':
        cout << int(num1) % int(num2) << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;
        break;
    }
}