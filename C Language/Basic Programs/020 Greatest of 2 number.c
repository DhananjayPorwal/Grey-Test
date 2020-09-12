#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    printf("A is greater than B\n");
    else if(b>a)
    printf("B is greater than A\n");
    else
    printf("both are equal numbers");
}
