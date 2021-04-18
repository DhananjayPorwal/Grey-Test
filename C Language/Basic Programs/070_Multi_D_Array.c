#include <stdio.h>
int main()
{
    int studentsMarks = 3;
    int totalSubjects = 5;
    int marks[3][5];
    for (int i = 0; i < studentsMarks; i++)
    {
        for (int j = 0; j < totalSubjects; j++)
        {
            printf("The marks of student %d of subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < studentsMarks; i++)
    {
        for (int j = 0; j < totalSubjects; j++)
        {
            printf("Enter marks of student %d of subject %d is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}