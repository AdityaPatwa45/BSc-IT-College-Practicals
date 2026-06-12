// Question : Write a programs to print the Fibonacci series using recursion.

#include <stdio.h>

int main()
{

    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    int next;
    int a = 0;
    int b = 1;

    printf("Fibonacci series is : ");

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", a);

        next = a + b;

        a = b;
        b = next;
    }

    return 0;
}
