// Question : Write a program to swap 2 numbers using 3 and 2 variables.

#include <stdio.h>

int main()
{

    // Method I using 3 variables.

    int a = 4;
    int b = 5;

    printf("Before swapping(Method I) :\na = %d and b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After using method I(3 variables) :\na = %d and b = %d\n\n", a, b);

    // Method II using 2 variables.

    a = 4;
    b = 5;

    printf("Before swapping(Method II) :\na = %d and b = %d\n", a, b);

    a = a + b; // 'a' becomes 9 ( 4 + 5)
    b = a - b; // 'b' becomes 4 ( 9 - 5) -> b swapped
    a = a - b; // 'a' becomes 5 ( 9 - 4) .> a swapped

    printf("After using method II(2 variables) :\na = %d and b = %d", a, b);

    return 0;
}