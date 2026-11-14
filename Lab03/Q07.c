#include<stdio.h>

int main()

{
    int matrix[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter a[%d][%d]:-> ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int max=matrix[0][0],min=matrix[0][0];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
            }
            else if(matrix[i][j]<min)
            {
                min=matrix[i][j];
            }
        }
    }

    printf("\nThe MAX no. is %d\nThe MIN no. is %d", max, min);
    return 0;
}