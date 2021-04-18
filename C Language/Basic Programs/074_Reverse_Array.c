#include <stdio.h>

void reverseArray(int n, int *inputArray)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp = inputArray[i];
        inputArray[i] = inputArray[n - i - 1];
        inputArray[n - i - 1] = temp;
    }
}

int main()
{
    int sizeArray, i;
    scanf("%d", &sizeArray);
    int inputArray[sizeArray];
    for (i = 0; i < sizeArray; i++)
    {
        scanf("%d", &inputArray[i]);
    }

    reverseArray(sizeArray, inputArray);
    for (int i = 0; i < sizeArray; i++)
    {
        printf("The reverse of array with index %d is %d \n", i, inputArray[i]);
    }
    // printf("The reverse of array with index %d is %d \n", i, inputArray[i]);

    return 0;
}