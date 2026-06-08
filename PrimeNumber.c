// Question : Write a program to check whether the entered number is prime or not.

#include <stdio.h>

int main()
{

    int n, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n <= 1)
    {
        count = 1;
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
    }

    if (count > 0)
    {
        printf("The entered number %d is not a prime number", n);
    }
    else
    {
        printf("The entered number %d is a prime number", n);
    }
    return 0;
}