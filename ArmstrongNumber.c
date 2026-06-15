// Question : Write a program to check whether the entered number is Armstrong or not.

#include <stdio.h>
#include <math.h>

int main()
{

    int n, lastdigit, armstrong = 0;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int on = n;
    int on1 = n;

    do
    {
        count++;
        on1 = on1 / 10;
    } while (on1 > 0);

    while (n > 0)
    {
        lastdigit = n % 10;
        armstrong = armstrong + (int)(pow(lastdigit, count) + 0.5);
        n = n / 10;
    }

    if (on == armstrong)
    {
        printf("The entered number %d is an Armstrong number", on);
    }
    else
    {
        printf("The entered number %d is not an Armstrong number", on);
    }

    return 0;
}