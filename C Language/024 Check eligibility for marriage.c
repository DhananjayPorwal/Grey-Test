#include <stdio.h>
int main(){
    int age;
    char status,gender;
    printf("Enter the yours details respectively{(Married=m, unmarried=u), (Male=m, Female=f), (age=32)}\n");
    scanf("%c%c%d",&status, &gender, &age);
    if(status=='m'){
        printf("You are not eligible\n");
    }
    else if (status=='u') {
        if (gender=='m') {
            if(age>=21){
                printf("You are eligible\n");
            }
            else {
            printf("You are not eligible\n");
            }
            
        }
        else if (gender=='f') {
            if(age>=18){
                printf("You are eligible\n");
            }
            else {
            printf("You are not eligible\n");
            }
        }
        else {
        printf("Invalid input\n");
        }

    }
    else {
    printf("Invalid input\n");
    } 
}
