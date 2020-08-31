#include <stdio.h>
int main(){
    int rollnum, m1, m2, m3,total;
    float avg;
    printf("Enter your Roll Number\n");
    scanf("%d", &rollnum);
    printf("Enter marks of three subjects\n");
    scanf("%d%d%d", &m1, &m2, &m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("Average is %f\n", avg);
    if(avg>=60)
     printf("Grade A\n");
    else if ((avg>=50)&&(avg<60))
     printf("Grade B\n");
    else
     printf("Grade C\n");
}
