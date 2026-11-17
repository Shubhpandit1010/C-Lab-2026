#include<stdio.h>
#include<string.h>

int main()

{
    char lineoftext[50];

    printf("\nEnter Line Of Text :-> ");
    scanf("%[^\n]", &lineoftext);
    
    int cl=0,cu=0,sc=0,d=0;
    for(int i=0;i<strlen(lineoftext);i++)
    {
        char temp=lineoftext[i];
        if(temp>='0' && temp<='9')
        {
            d+=1;
        }
        else if(temp>=65 && temp<=90)
        {
            cu+=1;
        }
        else if(temp>=97 && temp<=122)
        {
            cl+=1;
        }
        else
        {
            sc+=1;
        }
    }

    printf("\nUPPER CASE : %d \nLOWER CASE : %d \nDIGITS : %d \nSPECIAL : %d", cu,cl,d,sc);
    return 0;
}