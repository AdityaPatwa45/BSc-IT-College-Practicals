// Question : Write a program to arrange the ‘n’ numbers stored in the array in descending order.

#include <stdio.h>

int main()
{

    int arr[10] = {8, 3, 6, 4, 9, 2, 7, 5, 1, 10};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] < arr[j + 1])
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