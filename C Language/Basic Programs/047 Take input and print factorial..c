#include <stdio.h>
int main(){
    int i, fact=1, n;
    printf("Enter a number");
    scanf("%d", &n);
    for (int i = 1; i <=n ; i++) {
        fact=fact*i;
    }
    printf("\n Factorial of a given number is %d", fact);
}