// Question : Write a program to check whether the number is positive, negative or zero.

#include <stdio.h>

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The entered number %d is positive", n);
    }
    else if (n < 0)
    {
        printf("The entered number %d is negative", n);
    }
    else
    {
        printf("The entered number is zero");
    }
    return 0;
}