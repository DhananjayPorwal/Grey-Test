#include <iostream>
using namespace std;
int sum(int a, int b);
float sum(float a, float b);
double sum(double a, double b);
int main()
{
    cout << sum(2, 14) << endl;
    cout << sum(2.5, 14.44) << endl;
    cout << sum(2.63, 14.999) << endl;
}

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}