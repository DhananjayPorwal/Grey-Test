#include<stdio.h>
int main()
{
    float l, b, area;
    printf("Enter the value of length and breath");
    scanf("%f%f", &l, &b);
    area=0.5*l*b;
    printf("Area of triangle is %f", area);
}
