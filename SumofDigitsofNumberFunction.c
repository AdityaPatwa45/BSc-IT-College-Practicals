// Question : Write a program to find the sum of the digits of a number. Use user defined functions.

#include <stdio.h>

int sumofdigits(int n);

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum of entered digit %d is %d", n, sumofdigits(n));
    return 0;
}

int sumofdigits(int n)
{
    int lastdigit, sum = 0;

    if (n < 0)
    {
        n = -n;
    }
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }

    return sum;
}