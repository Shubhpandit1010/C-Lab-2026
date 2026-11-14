#include<stdio.h>

int findmax(int array[],int size)
{   
    int max=array[0];
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
int main()

{
    int n,a[n];
    
    printf("\nEnter Size of Array to be Declared:-> ");
    scanf("%d", &n);
    printf("\nEnter %d Elements:-> ", n);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nMAX ELEMENT:-> %d", findmax(a,n));
    return 0;
}