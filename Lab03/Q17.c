#include<stdio.h>
#include<math.h>

int isArmstrongNo(int n)
{
    int temp=n,temp2=n,digits=0,r,sum=0;
    while(n!=0)
    {
        r=n%10;
        n=n-r;
        n=n/10;
        digits+=1;
    }

    while(temp!=0)
    {
        r=temp%10;
        sum+=pow(r,digits);
        temp=temp-r;
        temp=temp/10;
    }

    if(sum==temp2)
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

    if(isArmstrongNo(number)==1)
    {
        printf("\n%d Is An Armstrong Number..", number);
    }
    else
    {
        printf("\n%d is Not An Armstrong Number..", number);
    }
    return 0;
}