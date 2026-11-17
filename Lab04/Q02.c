#include<stdio.h>
#include<string.h>

int main()

{
    char string[20];
    char target;

    printf("\nEnter String:-> ");
    scanf("%s", string);

    printf("\nEnter Target Character:-> ");
    scanf(" %c", &target);

    int length=strlen(string);
    for(int i=0;i<length;i++)
    {
        if(string[i]==target)
        {
            printf("\n%c Was Found At Index %d in string..", target,i);
            return 0;
        }
    }
    printf("\n%c Was Not Found in string..", target);
    return 0;
}