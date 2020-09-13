#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter a number");
    scanf("%d", &n);
    for (int i = 0; i <=n ; i++) {
        for (int j = 0; j <=i ; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}