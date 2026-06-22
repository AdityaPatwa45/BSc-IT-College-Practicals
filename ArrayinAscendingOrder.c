// Question :  Write a program to arrange the ‘n’ numbers stored in the array in ascending order.

#include <stdio.h>

int main()
{

    int arr[10] = {8, 3, 4, 9, 1, 6, 7, 2, 5, 10};

    int min = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}