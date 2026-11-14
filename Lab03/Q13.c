#include<stdio.h>
#define size 10

int main()

{
    int a[size];
    
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
        if(a[i]==target)
        {
            printf("\n%d element was found at index %d", target,i);
            return 0;
        }
    }
    printf("\n%d element was not found!", target);
    return 0;

}