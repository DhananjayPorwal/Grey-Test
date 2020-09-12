#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a>0)
    printf("%d is positive\n", a);
    else if(a<0)
    printf("%d is negative\n", a);
    else
    printf("%d is zero\n", a);
}
