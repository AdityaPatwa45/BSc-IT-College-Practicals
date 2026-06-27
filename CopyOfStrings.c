// Question : Write a program to copy a string from one location to another using the built-in function strcpy() OR
// Question : Write a program to copy a string from one location to another using a user-defined function (without using strcpy).

#include <stdio.h>
#include <string.h>

void copy(char str1[], char str2[]);

int main()
{

    // Question I
    // for question I we have to use [#include <string.h>] in header

    printf("\n\tQ.I\t\n\n");

    char str[100];
    char str1[100];

    printf("Enter first strings : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter second strings : ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("\n(Q.I) Final result is %s", strcpy(str, str1));

    printf("\n\n\tQ.II\t\n\n");

    char str2[100];
    char str3[100];

    printf("Enter first string : ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter second string : ");
    fgets(str3, 100, stdin);
    str3[strcspn(str3, "\n")] = '\0';

    copy(str2, str3);

    printf("\n(Q.II) Final result is %s", str2);

    return 0;
}

void copy(char str1[], char str2[])
{
    int i = 0;

    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';
}
