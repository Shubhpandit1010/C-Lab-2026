#include<stdio.h>

void Fibonacci(int terms)
{
    int f=0,s=1,t;

    for(int i=1;i<=terms;i++)
    {
        if(i==1)
        {
            printf("%d ", f);
        }
        else if(i==2)
        {
            printf("%d ", s);
        }
        else
        {
            t=f+s;
            f=s;
            s=t;
            printf("%d ", t);
        }
    }
}
int main()

{
    int N;
    printf("\nEnter Value Of N (Terms) :-> ");
    scanf("%d", &N);

    Fibonacci(N);
    return 0;
}