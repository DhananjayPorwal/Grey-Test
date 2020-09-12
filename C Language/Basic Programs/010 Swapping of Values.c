#include<stdio.h>
int main()
{
    int a, b ,temp;
    printf("Enter two values");
    scanf("%d%d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("The swapped values are %d, %d", a, b);
}
