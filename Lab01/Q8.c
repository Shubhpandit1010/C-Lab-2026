#include<stdio.h>

int main()

{
    long sec,days,mins,hours,temp;
    printf("\nEnter in seconds:-> ");
    scanf("%ld", &sec);
    days=sec/(24*60*60);
    temp=sec%(24*60*60);
    hours=temp/(60*60);
    temp=temp%(60*60);
    mins=temp/60;
    printf("\nDAYS: %ld\nHOURS: %ld\nMINUTES: %ld", days,hours,mins);
    return 0;
}