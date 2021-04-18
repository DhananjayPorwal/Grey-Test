#include <stdio.h>
int main()
{
    int a = 214;
    int *b = &a;
    printf("The address of a is %u.\n", b);
    printf("The value of a is %d.\n", *b);
    return 0;
}