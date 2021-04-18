#include <stdio.h>
int main()
{
    int numberTable;
    int TableMaker[10];
    scanf("%d", &numberTable);
    for (int i = 0; i < 10; i++)
    {
        TableMaker[i]= numberTable * (i + 1);
        printf("%d * %d = %d\n", numberTable, i+1, TableMaker[i]);
    }
    
    return 0;
}