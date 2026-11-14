#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int calculateNCR(int N,int R)
{
    return (factorial(N)/(factorial(R)*factorial(N-R)));
}
int main()

{
    int N,R;
    printf("\nEnter N and R respectively:->  ");
    scanf("%d %d", &N,&R);

    printf("\nValue of %d C %d = %d", N,R,calculateNCR(N,R));
    return 0;
}