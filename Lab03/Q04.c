#include<stdio.h>
#define size 10
int main()

{

    int a[size];

    printf("\nEnter 10 nos :-> ");

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int min,temp;

    for(int i=0;i<size;i++)
    {
        min=a[i];
        for(int j=i;j<size;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    printf("\nSORTED ARRAY BY SELECTION SORT...");

    for(int i=0;i<size;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}