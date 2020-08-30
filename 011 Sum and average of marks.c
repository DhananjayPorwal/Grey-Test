#include<stdio.h>
int main()
{
    int m1, m2, m3, sum;
    float avg;
    printf("Enter marks of Maths\n");
    scanf("%d", &m1);
    printf("Enter marks of Science\n");
    scanf("%d", &m2);
    printf("Enter marks of English\n");
    scanf("%d", &m3);
    sum=m1+m2+m3;
    avg=sum/3;
    printf("Sum and Average of marks are %d and %f\n", sum, avg);    
}
