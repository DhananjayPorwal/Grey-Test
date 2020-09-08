#include <stdio.h>
int main(){
    int i, j, k, n;
    printf("Enter number");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (k=1; k<i; k++) {
        printf(" ");
        }
        for (j=i; j<=n; j++) {
        printf("*");
        }
        printf("\n");
    }
    }