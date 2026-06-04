// Question : Write a program to check whether the number is even or odd.

#include <stdio.h>

int main()
{

    int n;

    printf("Enter a number to check number is even or odd : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The entered number %d is even ", n);
    }
    else
    {
        printf("The entered number %d is odd ", n);
    }

    
    // LOGIC : If we divide any number by 2 and its remainder is 0 so thats number is even if remainder is not 0 so thats number is odd.
    
    
    return 0;
}