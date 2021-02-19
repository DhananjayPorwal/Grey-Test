#include <iostream>
using namespace std;

int sumRecursion(int m, int n)
{
    if (m == n)
        return m;
    return m + sumRecursion(m + 1, n);
}

int main()
{
    int m = 1, n = 10;
    cout << "Sum : " << sumRecursion(m, n) << endl;
    // int m = 2, n = 4, sum = 0;
    // for (int i = m; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum : " << sum << endl;
}