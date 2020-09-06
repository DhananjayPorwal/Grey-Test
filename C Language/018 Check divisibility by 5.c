#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a%5==0)
    printf("%d is divisible by 5\n", a);
    else
    printf("Not divisible by 5\n", a);
}
