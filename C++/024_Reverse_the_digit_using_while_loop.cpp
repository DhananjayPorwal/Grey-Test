#include <iostream>
using namespace std;
int main()
{
    int number, reverseNumber = 0;
    cout << "Enter a number :";
    cin >> number;
    while (number != 0)
    {
        reverseNumber *= 10;
        reverseNumber += number % 10;
        number /= 10;
    }
    cout << "Reverse Number :" << reverseNumber;
}