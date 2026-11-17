#include<stdio.h>
#include<string.h>

int main()

{
    char string[20];
    printf("\nEnter String:-> ");
    scanf("%s", string);

    int count=0;

    for(int i=0;i<strlen(string);i++)
    {
        char temp=string[i];
        if(temp=='a' || temp== 'e' || temp=='i' || temp=='o' || temp=='u' || temp=='A' || temp== 'E' || temp=='I' || temp=='O' || temp=='U')
        {
            count+=1;
        }
    }
    printf("\nTOTAL VOWELS IN STRING :-> %d", count);
    return 0;
}