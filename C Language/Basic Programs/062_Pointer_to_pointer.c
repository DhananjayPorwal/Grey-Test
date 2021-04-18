#include <stdio.h>
int main()
{
    int i = 5;
    int *pointer = &i;
    int **pointerToPointer = &pointer;
    printf("The value of i is %d.\n", **pointerToPointer);
    return 0;
}