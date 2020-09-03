#include<stdio.h>
int main(){
   int rem,sum=0,n;
   printf("Enter n : ");
   scanf("%d", &n);
  while(n>0)
 {
 rem=n%10;
 sum=sum+rem;
 n=n/10;
 }
 printf("Sum of digits....%d", sum);
 
}
