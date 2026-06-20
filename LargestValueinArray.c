// Question : Write a program to find the largest value that is stored in the array.

#include <stdio.h>

int main()
{

    int arr[] = {-1, -2, -3, -5, -4, -3, -2, -10, -8};

    int largest = arr[0];

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest is %d", largest);

    return 0;
}