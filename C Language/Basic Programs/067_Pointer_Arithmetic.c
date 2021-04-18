#include <stdio.h>
int main()
{
    // int
    int a = 214;
    int *ptr = &a;
    printf("The value of ptr is %u.\n", ptr);
    ptr++;
    printf("The value of ptr is %u.\n", ptr);

    // char
    char alpha = 'a';
    char *sudo = &alpha;
    printf("The value of ptr is %u.\n", sudo);
    sudo++;
    printf("The value of ptr is %u.\n", sudo);

    int subtractPointers = *ptr - *sudo ;
    printf("%d", subtractPointers);

    return 0;
}