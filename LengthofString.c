// Question : I.Write a program to find the length of a string using the built-in function strlen OR
// II.Write a program to find the length of a string using a user-defined function (without using strlen).

#include <stdio.h>
#include <string.h>

int stringlength(char str[]);

int main()
{

    // Question I
    // for question I we have to use [#include <string.h>] in header

    printf("\n\tQ.I\t\n\n");
    char str1[100];

    printf("To find length of the string write something here : ");

    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("(Q.I) Lenght of the sring is %d", strlen(str1));

    // Question II

    printf("\n\tQ.II\t\n\n");
    char str[100];

    printf("To find length of the string write something here : ");

    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("(Q.II) Length of the string is %d", stringlength(str));

    return 0;
}

int stringlength(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}
