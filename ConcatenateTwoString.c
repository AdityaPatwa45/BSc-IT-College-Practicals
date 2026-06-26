// Question : Write a program to concatenate (join) two strings using the built-in function strcat() OR
// Question : Write a program to concatenate (join) two strings using a user-defined function (without using strcat).

#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[]);

int main()
{

    // Question I
    // for question I we have to use [#include <string.h>] in header

    printf("\n\tQ.I\t\n\n");
    char str[100];
    char str1[100];

    printf("To concatenate two strings enter first string : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\nTo concatenate two strings enter second string : ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("\n(Q.I) After concatenate two strings : %s", strcat(str, str1));

    // Question II

    printf("\n\tQ.II\t\n\n");
    char str2[100];
    char str3[100];

    printf("To concatenate two strings enter first string : ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nTo concatenate two strings enter second string : ");
    fgets(str3, 100, stdin);
    str3[strcspn(str3, "\n")] = '\0';

    concatenate(str2, str3);

    return 0;
}

void concatenate(char str1[], char str2[])
{
    int i = 0;
    int j = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];

        i++;
        j++;
    }

    str1[i] = '\0';
    printf("(Q.II) After concatenate two strings : %s", str1);
}