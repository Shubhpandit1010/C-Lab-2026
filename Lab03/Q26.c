#include<stdio.h>

int strlength(char string[])
{
    int length=0,i=0;

    while(string[i]!='\0')
    {
        length+=1;
        i+=1;
    }
    return length;
}
int main()
{
    char c[20];

    printf("\nEnter STRING:-> ");
    scanf("%[^\n]", c);
    printf("\n%d", strlength(c));
    return  0;
}