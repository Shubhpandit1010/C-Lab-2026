#include<stdio.h>

int isPrime(int number)
{
    if(number==1)
    {
        return -1;
    }
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()

{
    int n;
    printf("\nEnter Number:-> ");
    scanf("%d", &n);

    if(isPrime(n)==1)
    {
        printf("\n%d Is A PRIME Number..", n);
    }
    else if(isPrime(n)==-1)
    {
        printf("\n%d is neither PRIME nor COMPOSITE Number..", n);
    }
    else
    {
        printf("\n%d is not A PRIME Number..", n);
    }
    return 0;
}