#include<stdio.h>

int main()

{
    int matrix1[3][3],matrix2[3][3];

    printf("\nEnter Values (9) for Matrix 1: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter Values (9) for Matrix 2: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int c[3][3],sum;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=0;
            for(int k=0;k<3;k++)
            {
                sum+=matrix1[i][k]*matrix2[k][j];
            }
            c[i][j]=sum;
        }
    }

    printf("\nMATRIX C:-> \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;

}