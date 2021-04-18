#include <stdio.h>

void wrongSwap(int a, int b);
void Swap(int *a, int *b);

int main()
{
    int a = 3, b = 4;
    printf("The value of a and b before swap is %d and %d\n", a, b);
    wrongSwap(a, b); // will not work because of call by value
    Swap(&a, &b); // will not work because of call by reference
    printf("The value of a and b after swap is %d and %d\n", a, b);
    return 0;
}

void wrongSwap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
