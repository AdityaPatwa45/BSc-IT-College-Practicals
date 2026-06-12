// Question : Write a programs to print the Fibonacci series using recursion.

#include <stdio.h>

int fib(int n);

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Fibonacci series is : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int fibN;

    fibN = fib(n - 1) + fib(n - 2);

    return fibN;
}