#include<stdio.h>
#define size 10
int main()

{
    int a[size],count=0;

    printf("\nEnter %d elements:-> ", size);

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int target;
    printf("\nEnter Target Value:-> ");
    scanf("%d", &target);

    for(int i=0;i<size;i++)
    {
        if(target==a[i])
        {
            count+=1;
        }
    }
    printf("\nThe Target Occurred %d times..", count);
    return 0;
}