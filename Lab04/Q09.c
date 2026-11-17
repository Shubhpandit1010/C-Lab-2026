#include<stdio.h>

int main()

{
    char string[20];
    printf("\nEnter String:-> ");
    scanf("%s", string);

    char select,target;

    printf("\nEnter the Character to be replaced and the New Character :-> ");
    scanf(" %c %c", &select,&target);

    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]==select)
        {
            string[i]=target;
        }
        i++;
    }
    printf("\nNEW EDITED STRING : %s", string);
    return 0;
}