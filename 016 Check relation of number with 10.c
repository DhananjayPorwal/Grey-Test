#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a>10)
    printf("%d is greater than 10\n", a);
    else if(a<10)
    printf("%d is less  than 10\n", a);
    else
    printf("%d is equal to 10\n", a);
}
