#include<stdio.h>

int main()

{
    int a[10],b[10],temp;

    printf("\nEnter Nos to be stored in 'a' :-> ");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter nos to be stored in 'b' :-> ");

    for(int i=0;i<10;i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nINITIAL.. ");
    for(int i=0;i<10;i++)
    {
        printf("\n A: %d \t B: %d", a[i], b[i]);
    }
    for(int i=0;i<10;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }

    printf("\nAFTER SWAPPING..");
    for(int i=0;i<10;i++)
    {
        printf("\n A: %d \t B: %d", a[i], b[i]);
    }
    return 0;
}