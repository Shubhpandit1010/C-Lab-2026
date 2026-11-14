#include<stdio.h>

int isPalindrome(int n)
{
    int r,temp=n,rev=0;

    while(n!=0)
    {
        r=n%10;
        rev=(10*rev)+r;
        n=n-r;
        n=n/10;
    }

    if(rev==temp)
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

    if(isPalindrome(number)==1)
    {
        printf("\nEntered Number is Palindrome..");
    }
    else
    {
        printf("\nEntered Number Is Not A Palindrome..");
    }
    return 0;
}