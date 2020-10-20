#include<stdio.h>
int main(){
    int i, n, newn, sum_avg=0;
    float avg;
    printf("Enter a number");
    scanf("%d", &n);
    printf("Enter numbers");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &newn);
        sum_avg=sum_avg+newn;
    }
    avg=sum_avg/(float)n;
    printf("Average =%f\n", avg);
    
}
