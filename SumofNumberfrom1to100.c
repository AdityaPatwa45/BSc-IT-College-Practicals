// Question : Write a program to find the sum of numbers from 1 to 100.

#include <stdio.h>

int main()
{

    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    // or

    // Instead of using loop to calculate the sum of numbers from 1 to 100 or any n numbers we can use formula for this.
    // Formula :[ (n * (n + 1)) / 2]
    // This formula is so efficient because if we want to calculate the sum from 1 to 10000000 we can't use loop it's wasteing time to run loop to 1 Crore time that's why we use formula.
    // sum = (100 * (100 + 1)) / 2;

    printf("The sum of numbers from 1 to 100 is %d", sum);
    return 0;
}