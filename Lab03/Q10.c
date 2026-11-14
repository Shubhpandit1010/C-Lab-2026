#include <stdio.h>

int main()

{
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];

    printf("\nEnter 9 values row by row for matrix1: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter 9 values row by row for matrix2: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}