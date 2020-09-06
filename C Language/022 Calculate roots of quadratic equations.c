#include<stdio.h>
int main(){
    float a,b,c,r1,r2,x;
    printf("Enter the value of a, b, c\n");
    scanf("%f%f%f", &a, &b, &c);
    x=b*b-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
    printf("Roots are unequal\n");
    else if(x<0)
    printf("Roots are imaginary\n");
    else
     printf("Roots are equal\n");
    printf("R1=%f\n",r1);
    printf("R2=%f\n",r2);
}
