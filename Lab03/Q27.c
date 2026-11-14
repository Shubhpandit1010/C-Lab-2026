#include<stdio.h>
#define count 3
struct StudentInfo
{
    int rollnumber;
    char name[20];
    int marks;
};

void FilterGreater500(struct StudentInfo Students[])
{
    for(int i=0;i<count;i++)
    {
        if(Students[i].marks>500)
        {
            printf("\nROLL No: %d", Students[i].rollnumber);
            printf("\nNAME: %s", Students[i].name);
            printf("\nMARKS: %d\n", Students[i].marks);
        }
    }
}
int main()

{
    struct StudentInfo S[count];

     for(int i=0;i<count;i++)
    {
        printf("\nEnter RollNo.: ");
        scanf("%d", &S[i].rollnumber);
        printf("\nEnter NAME:-> ");
        scanf("%s", S[i].name);
        printf("\nEnter Marks: ");
        scanf("%d", &S[i].marks);
    }
    FilterGreater500(S);
    return 0;
}