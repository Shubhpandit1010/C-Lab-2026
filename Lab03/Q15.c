#include<stdio.h>

int oddoreven(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()

{
    int number;
    printf("\nEnter Number:-> ");
    scanf("%d", &number);
    
    if(oddoreven(number)==1)
    {
        printf("\nEntered Number is EVEN..");
    }
    else
    {
        printf("\nEntered Number is ODD..");
    }
    return 0;
}