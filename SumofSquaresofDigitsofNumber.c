// Question : Write a program to find the sum of squares of digits of a number.

#include <stdio.h>

int main()
{

    int n, lastdigit, sumofdigit = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        lastdigit = n % 10;
        sumofdigit = sumofdigit + (lastdigit * lastdigit);
        n = n / 10;
    }

    printf("The sum of squares of digits of a number is %d", sumofdigit);
    return 0;
}

