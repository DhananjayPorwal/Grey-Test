#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, *(ptr+i));
//     }

// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
}

int main()
{
    int randomArray[] = {1, 2, 3, 4, 5, 5, 6, 34, 46, 35};
    printArray(randomArray, 10);
    return 0;
}