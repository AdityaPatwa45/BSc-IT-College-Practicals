// Question : Write a program to find the sum of natural number using recursive function.

#include <stdio.h>

int sumofnatural(int n);

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum is %d", sumofnatural(n));

    return 0;
}

int sumofnatural(int n)
{
    int sum = 0;

    if (n <= 0)
        return 0;

    if (n == 1)
        return 1;

    sum = n + sumofnatural(n - 1);

    return sum;
}