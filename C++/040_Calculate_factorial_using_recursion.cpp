#include <iostream>
using namespace std;

int callingRecusiveFactorial(int a)
{
    if (a > 1)
        return a * callingRecusiveFactorial(a - 1);
    else
        return 1;
}

int main()
{
    int userInput;
    cout << "Enter a number\n";
    cin >> userInput;
    cout << "Factorial : " << callingRecusiveFactorial(userInput) << endl;
}