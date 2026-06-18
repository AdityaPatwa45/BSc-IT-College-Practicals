// Question : Write a program to swap 2 numbers. Use call by reference

#include <stdio.h>

void swap(int *a, int *b);

int main()
{

    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter a number : ");
    scanf("%d", &b);

    swap(&a, &b);

    printf(" a = %d and b = %d", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}