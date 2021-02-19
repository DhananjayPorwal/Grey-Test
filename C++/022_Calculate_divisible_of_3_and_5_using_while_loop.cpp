#include <iostream>
using namespace std;
int main()
{
    int count = 100;
    while (count <= 500)
    {
        if (count % 3 == 0 && count % 5 == 0)
        {
            cout << count << "\t";
        }
        count++;
    }
}