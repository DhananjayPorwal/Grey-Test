#include <stdio.h>
int main()
{
    int sizeOfArray, sum;
    scanf("%d", &sizeOfArray);
    int mainArray[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &mainArray[i]);
    }
    for (int j = 0; j < sizeOfArray; j++)
    {
        if (mainArray[j] >= 0)
        {
            sum++;
        }
    }
    printf("The positive elements in array is/are %d", sum);

    return 0;
}