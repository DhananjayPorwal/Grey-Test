#include <stdio.h>
int main()
{
    int i = 214;
    int *j = &i;
    int **k = &j;
    printf("Here, j stores the address of i %u\n", j);
    printf("Here, k stores the address of j %u\n", k);

    return 0;
}