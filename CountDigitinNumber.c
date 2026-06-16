// Question : Write a program to count the digits in a number.

#include <stdio.h>

int main()
{

    long long  n, count = 0;

    printf("Enter a number : ");
    scanf("%lld", &n);

    long long on = n;

    do
    {
        count++;
        n = n / 10;
    } while (n > 0);

    printf("Total %lld digit in this %lld", count, on);
    return 0;
}