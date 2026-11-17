#include<stdio.h>

int main()

{
    char name[20];
    printf("\nEnter NAME :-> ");
    scanf("%s", name);

    int i=0;
    printf("\n");
    while(name[i]!='\0')
    {
        printf("%d ", name[i]);
        i++;
    }
    return 0;
}