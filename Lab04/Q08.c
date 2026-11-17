#include<stdio.h>
#include<string.h>

int main()

{
    char string[20],temps[20];
    printf("\nEnter String :-> ");
    scanf("%s", string);

    int length=strlen(string);
    strcpy(temps,string);
    char temp;

    for(int i=0;i<length/2;i++)
    {
        temp=string[i];
        string[i]=string[length-i-1];
        string[length-i-1]=temp;
    }
    string[length]='\0';    

    if(strcmp(temps,string)==0)
    {
        printf("\nPALINDROME..");
    }
    else
    {
        printf("\nNOT PALINDROME..");
    }
    return 0;
}