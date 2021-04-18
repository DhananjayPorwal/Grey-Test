#include <stdio.h>

const int m = 3;
const int n = 2;

void printValues(int arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}

int main()
{
    int inputA = 3, inputB = 2;
    int inputArray[3][2] = {{1, 3}, {3, 6}, {6, 9}};

    printValues(inputArray);

    return 0;
}