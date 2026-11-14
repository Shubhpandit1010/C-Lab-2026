#include<stdio.h>

int isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()

{
    char letter;

    printf("\nEnter Character:-> ");
    scanf("%c", &letter);

    if(isVowel(letter)==1)
    {
        printf("\n%c is VOWEL", letter);
    }
    else
    {
        printf("\n%c is NOT A VOWEL", letter);
    }
    return 0;
}