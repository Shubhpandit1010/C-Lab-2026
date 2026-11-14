#include<stdio.h>

struct BookInfo
{
    int bookid;
    char bookname[20];
    char author[20];
    int price;
};

struct BookInfo read()
{
    struct BookInfo Books;
    printf("\nEnter BOOK ID, BOOKNAME, AUTHOR and PRICE respectively:-> ");
    scanf("%d %s %s %d", &Books.bookid,Books.bookname,Books.author,&Books.price);
    return Books;
}


void display(struct BookInfo structureofit)
{
    printf("\nBOOK ID : %d\nBOOKNAME : %s\nAUTHOR : %s\nPRICE : %d", structureofit.bookid,structureofit.bookname,structureofit.author,structureofit.price);
}

int main()

{
    struct BookInfo Book;
    Book=read();
    display(Book);
    return 0;
}