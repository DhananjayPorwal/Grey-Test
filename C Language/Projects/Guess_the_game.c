//Guided by CodeWithHarry
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguess=1;
    srand(time(0));             //To generate random number
    number= rand()%100 + 1;     //To generate random number
    printf("How to play:\n");
    printf("1. You have to guess the number randomly, then game will guide you to choose lower number or higher number.\n");
    printf("2. As per the instruction of game, you have to choose another number.\n");
    printf("This cycle will run untill you guess the number correctly.\n");
    do
    {
        printf("Guess the number between 1 to 100.\n");
        scanf("%d", &guess);
        if (guess<number)
        {
            printf("Higher number please!\n");
        }
        else if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Bingo! You guess the number correctly.\n");
            printf("You guess the number correctly in %dth attemp.\n", nguess);
            printf("************************YOU WON************************");
            break;
        }
        nguess++;
    } while (guess!=number);
    return 0;
}
