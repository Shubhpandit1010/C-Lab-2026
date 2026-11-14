#include<stdio.h>

int main()

{
    int a[10],b[10],c[10];

    printf("\nEnter 10 nos to be stored in 'a':-> ");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter 10 nos to be stored in 'b':-> ");

    for(int i=0;i<10;i++)
    {
        scanf("%d", &b[i]);
    }

    for(int i=0;i<10;i++)
    {
        c[i]=a[i]+b[i];
    }

    for(int i=0;i<10;i++)
    {
        printf("\n 'a'%d + 'b'%d = 'c'%d", a[i],b[i],c[i]);
    }
    return 0;
}