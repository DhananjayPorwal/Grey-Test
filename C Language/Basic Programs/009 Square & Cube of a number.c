#include<stdio.h>
int main()
{
    int a, cube, square;
    printf("Enter the value");
    scanf("%d", &a);
    square=a*a;
    cube=a*a*a;
    printf("The required value of square and cube is %d, %d respectively.", square, cube);
}
