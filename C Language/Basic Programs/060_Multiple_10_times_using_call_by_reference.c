#include <stdio.h>

void multipleOfTen(int i)
{
    i = i * 10;
}

int main()
{
    int a = 2;
    multipleOfTen(a);
    printf("The tenth multiple of a is %d.\n", a * 10);

    return 0;
}