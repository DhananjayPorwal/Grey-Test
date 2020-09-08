#include <stdio.h>
int main(){
    int i, n, newn, sum=0;
    printf("Enter a number");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
    scanf("%d", &newn);
    sum= sum+newn;
    }
    printf("%d", sum);
}