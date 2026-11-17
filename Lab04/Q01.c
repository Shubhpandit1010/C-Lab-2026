#include<stdio.h>
#include<string.h>

int main()

{
    char string1[20],string2[20],temp[20];
    printf("\nEnter Two Strings Respectively:-> ");
    scanf("%s %s", string1,string2);
    int length1,length2;
    length1=strlen(string1);//Length of String 1
    length2=strlen(string2);//Length of String 2
    printf("\nLENGTH 1 : %d Length 2 : %d", length1,length2);
    strcpy(temp,string1);//Copying String 1 into temp
    printf("\nSTRING 1 : %s TEMP : %s", string1,temp);
    if(strcmp(temp,string1)==0)//Comparing String 1 and Temp
    {
        printf("\nSTRING 1 and TEMP are same.");
    }
    strcat(string1,string2);//Concating String 2 to String 1
    printf("\nNOW STRING 1 : %s", string1);

    strrev(string1);//Reverse String 1
    printf("\nREVERSED String 1 : %s", string1);
    return 0;
}