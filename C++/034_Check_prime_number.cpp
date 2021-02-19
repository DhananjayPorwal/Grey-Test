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
                // isPrimeFlag = false;
                // break;
            }
        }
        return true;
    }

    int main()
    {
        int number;
        cout << "Number : ";
        cin >> number;
        // bool isPrimeFlag = true;
        // for (int i = 2; i < number; i++)
        // {
        //     if (number % i == 0)
        //     {
        //         isPrimeFlag = false;
        //         break;
        //     }
        // }
        bool isPrimeFlag = isPrimeNumber(number);
        if (isPrimeFlag)
        {
            cout << "Prime Number";
        }
        else
        {
            cout << "Not a prime number";
        }
    }