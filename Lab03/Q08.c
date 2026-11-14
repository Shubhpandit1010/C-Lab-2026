#include<stdio.h>

int main()

{
    int matrix[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter a[%d][%d] :-> ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum[3];
    sum[0]=sum[1]=sum[2]=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i]=sum[i]+matrix[i][j];
        }
    }

    printf("\nSUM R1: %d\nSUM R2: %d\nSUM R3: %d", sum[0],sum[1],sum[2]);
    return 0;
}