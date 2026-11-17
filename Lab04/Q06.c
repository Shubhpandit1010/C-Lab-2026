#include<stdio.h>
#include<string.h>

int main()

{
    char string[50];
    printf("\nEnter String:-> ");
    scanf("%[^\n]", string);

    int i=0,word=0;

    while(i!=strlen(string))
    {
        if(string[i]!=' ' && (i==0 || string[i-1]==' '))
        {
            word+=1;
        }
        i++;
    }
    printf("\nCHARACTERS : %d\nWORDS: %d", strlen(string),word);
    return 0;
}