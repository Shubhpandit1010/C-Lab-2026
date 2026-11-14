#include<stdio.h>

void interchange(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()

{
    int x,y;
    printf("\nEnter Two Numbers:-> ");
    scanf("%d %d", &x,&y);

    printf("\nBEFORE INTERCHANGE: \nX: %d\nY: %d", x,y);

    interchange(&x,&y);

    printf("\nAFTER INTERCHANGE: \nX: %d\nY: %d", x,y);
    return 0;
}