#include<stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the Principal value");
    scanf("%f", &p);
    printf("Enter the rate");
    scanf("%f", &r);
    printf("Enter the time duration");
    scanf("%f", &t);
    si=p*r*t/100;
    printf("The required Simple Intrest is %f", si);
}
