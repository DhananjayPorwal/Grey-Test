#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter a number :";
    cin >> number;
    if (number == 0)
    {
        cout << "You have entered 0. " << endl;
    }
    else
    {
        if (number < 0)
        {
            number = -1 * number;
        }
        while (number > 0)
        {
            number /= 10;
            count++;
        }

        cout << "It contains " << count << " numbers." << endl;
    }
}