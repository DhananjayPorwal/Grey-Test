#include <stdio.h>
int main()
{
    int arrayInserted[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arrayInserted[0];
    ptr = ptr + 2;
    printf("%d", arrayInserted[2]);
    return 0;
}