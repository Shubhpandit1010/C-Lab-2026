#include<stdio.h>
#include<string.h>

int main()

{
    char string[20];
    printf("\nEnter String:-> ");
    scanf("%s", string);

    for(int i=0;i<strlen(string);i++)
    {
        string[i]=string[i]-32;
    }
    printf("\nUPPER CASE STRING : %s", string);
    return 0;
}