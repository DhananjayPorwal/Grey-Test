#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a ,&b ,&c);
    if((a>=b)&&(a>=c)){
        if(b>=c){
            printf("Ascending order of the given numbers is %d%d%d\n", c,b,a);
        }
        else{
            printf("Ascending order of the given numbers is %d%d%d\n", b,c,a);
        }
    }
    else if((b>=a)&&(b>=c)){
        if(a>=c){
            printf("Ascending order of the given numbers is %d%d%d\n", c,a,b);
        }
        else{
            printf("Ascending order of the given numbers is %d%d%d\n", a,c,b);
        }
    }
    else if((c>=b)&&(c>=a)){
        if(a>=b){
            printf("Ascending order of the given numbers is %d%d%d\n", b,a,c);
        }
        else{
            printf("Ascending order of the given numbers is %d%d%d\n", a,b,c);
        }
    }
}
