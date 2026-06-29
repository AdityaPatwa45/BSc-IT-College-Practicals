// Question : Write a program to accept 3 details of books and print the same using structures.

#include <stdio.h>
#include <string.h>

typedef struct bookdetails
{
    char bookname[100];
    char authorname[100];
    float price;
} book;

int main()
{

    book b[3];

    for (int i = 0; i < 3; i++)
    {

        printf("\n\tBOOK %d\t\n", i + 1);

        printf("\nEnter name of the book : ");
        fgets(b[i].bookname, 100, stdin);

        b[i].bookname[strcspn(b[i].bookname, "\n")] = '\0';

        printf("Enter name of the author : ");
        fgets(b[i].authorname, 100, stdin);

        b[i].authorname[strcspn(b[i].authorname, "\n")] = '\0';

        printf("Enter price of the book : ");
        scanf("%f", &b[i].price);

        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n--------------------");
        printf("\n\tBOOK %d", i + 1);
        printf("\n--------------------");
        printf("\nBook Name : %s", b[i].bookname);
        printf("\nAuthor : %s", b[i].authorname);
        printf("\nPrice : Rs.%.2f", b[i].price);
    }

    return 0;
}