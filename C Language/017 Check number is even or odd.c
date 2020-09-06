#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a%2==0)
    printf("%d is even number\n", a);
    else if(a%2==1)
    printf("%d is odd number\n", a);
    else
    printf("Number is zero\n", a);
}
