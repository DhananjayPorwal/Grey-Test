#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a%7==0)
    printf("%d is multiple of 7\n", a);
    else
    printf("%d is not multiple of 7\n", a);
}
