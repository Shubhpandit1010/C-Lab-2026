#include<stdio.h>
#define n 10
int main()

{
    int a[n];
    printf("\nEnter %d nos:-> ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    int max=a[0],smax=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && a[i]!=max)
        {
            smax=a[i];
        }
    }
    printf("\nMAX: %d\nSECOND MAX: %d", max,smax);
    return 0;
}