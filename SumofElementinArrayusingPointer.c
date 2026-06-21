// Question : Write a program using pointers to compute the sum of all elements stored in an array.

#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = 0;

    int *ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("The sum is %d", sum);
    return 0;
}