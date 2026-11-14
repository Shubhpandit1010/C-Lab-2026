#include<stdio.h>

struct BookInfos
{
    int bookid;
    char bookname[20];
    char author[20];
    int price;
};

void read(struct BookInfos *BookPointer)
{
    printf("\nEnter BOOKID, BOOKNAME, AUTHOR, PRICE Respectively:-> ");
    scanf("%d %s %s %d", &BookPointer->bookid,BookPointer->bookname,BookPointer->author,&BookPointer->price);
}

void display(struct BookInfos *BookPointer)
{
    printf("\nBOOKID : %d\nBOOKNAME : %s\nAUTHOR : %s\nPRICE : %d", BookPointer->bookid,BookPointer->bookname, BookPointer->author, BookPointer->price);
}

int main()

{
    struct BookInfos Bookstruc;
    read(&Bookstruc);
    display(&Bookstruc);
    return 0;
}