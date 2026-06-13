// Question : Write a program to find the reverse of a number and check if it is a palindrome or not.

#include <stdio.h>

int main()
{

    int n, lastdigit, reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int on = n;

    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }

    printf("Reverse of %d is %d\n", on, reverse);

    if (on == reverse)
    {
        printf("%d is a palindrome", on);
    }
    else
    {
        printf("%d is not a palindrome", on);
    }

    // If we reverse any number and if actual number and reverse number are same is known as palindrome like 121 etc.

        return 0;
}