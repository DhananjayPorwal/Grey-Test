#include <stdio.h>
int main(){
    int rem, sum=0, n, temp;
    printf("Enter a value to check wheather it is Armstrong number or Not\n");
    scanf("%d", &n);
    temp=n;
    while (n>0) {
    rem=n%10;
    sum=sum+rem*rem*rem;
    n=n/10;
    }
    if (temp==sum) {
    printf("Armstrong Number\n");
    }
    else{
    printf("Not an Armstrong Number\n");
    }
}