#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 5, b = 7;
    printf("The sum of a and b is %d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}