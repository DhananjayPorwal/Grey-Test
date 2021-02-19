#include <iostream>
using namespace std;
bool isPrimeNumber(int number)
{
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count = 0;
    for (int i = 2; i <= 100; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << " is a prime number" << endl;
            count++;
        }
    }
    cout << "Total Prime Numbers: " << count << endl;
}