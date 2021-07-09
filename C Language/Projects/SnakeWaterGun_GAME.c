#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gameFunction(char userInput, char computerInput)
{
    if (userInput == computerInput)
    {
        return 0;
    }
    if (userInput == 's' && computerInput == 'w')
    {
        return 1;
    }
    else if (userInput == 'w' && computerInput == 's')
    {
        return -1;
    }
    if (userInput == 'w' && computerInput == 'g')
    {
        return 1;
    }
    else if (userInput == 'g' && computerInput == 'w')
    {
        return -1;
    }
    if (userInput == 'g' && computerInput == 's')
    {
        return 1;
    }
    else if (userInput == 's' && computerInput == 'g')
    {
        return -1;
    }
}

int main()
{
    char userInput, computerInput;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number > 33)
    {
        computerInput = 's';
    }
    else if (number < 33 && number > 66)
    {
        computerInput = 'w';
    }
    else
    {
        computerInput = 'g';
    }
    printf("Enter 's' for SNAKE, 'w' for WATER and 'g' for GUN\n");
    scanf("%c", &userInput);
    int temp = gameFunction(userInput, computerInput);
    printf("You choose %c and computer choose %c\n", userInput, computerInput);
    if (temp == 0)
    {
        printf("Match Tie\n");
    }
    else if (temp == 1)
    {
        printf("Victory\n");
    }
    else
    {
        printf("Better Luck Next Time\n");
    }

    return 0;
}
