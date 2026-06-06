// Write a program to find the factorial of a number.

#include <stdio.h>

int main()
{

    int n, fact = 1; 
    // long long fact = 1; Use this for larger factorial like 13 or more.

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);

    return 0;
}