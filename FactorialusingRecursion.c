//  Question : Write a program to find the factorial of a number using recursive function.

#include <stdio.h>

int factorial(int n);

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Factorail is %d", factorial(n));

    return 0;
}

int factorial(int n)
{
    int fact = 1;

    if (n <= 1)
        return 1;

    fact = n * factorial(n - 1);

    return fact;
}