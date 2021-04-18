#include <stdio.h>

void printAdd(int a)
{
    printf("The address of a is %u\n", &a);
}

int main()
{
    int i = 214;
    printf("The value of i is %d.\n", i);
    printAdd(i);
    printf("The address of i is %u.\n", &i);
    return 0;
}