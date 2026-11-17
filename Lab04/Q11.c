#include<stdio.h>
#define name_length 6
#define total_entities 3
void swap(char *c1,char *c2)
{
    int temp;
    temp=*c1;
    *c1=*c2;
    *c2=temp;
}

void swap_till_different(char a[][name_length],int i,int j,int k)
{
    int t2=j;
    while(t2 < name_length && a[i][t2] != '\0' && a[i][t2] == a[k][t2])
    {
        t2++;
    }
    if(a[k][t2]<a[i][t2])
    {
        while(t2!=name_length)
        {
            swap(&a[k][t2],&a[i][t2]);
            t2++;
        }
    }

}
void name_sorter(char a[][name_length],int columns,int total_names,int j)
{
    int i=0;
    char min;

    while(i<total_names)
    {
        min=a[i][j];
        for(int k=i+1;k<total_names;k++)
        {
            if(a[k][j]<=min)
            {
                min=a[k][j];
                swap_till_different(a,i,j,k);
            }
        }
        i++;
    }
}

int main()

{
    char a[total_entities][name_length]={"HABL", "HAAA", "HAAF"}; 
    printf("\nEntered NAMES:\n");
    for(int i=0;i<total_entities;i++)
    {
        for(int j=0;j<name_length;j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    name_sorter(a,name_length,total_entities,0);

    printf("\nSORTED NAMES:\n");
    for(int i=0;i<total_entities;i++)
    {
        for(int j=0;j<name_length;j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}