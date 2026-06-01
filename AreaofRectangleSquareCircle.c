// Question :  Write a program to find the area of rectangle, square and circle.

#include <stdio.h>

int main()
{

    // Area of rectangle [Formula : Length * Width]

    printf("\n\tArea of RECTANGLE\t\n"); // It is only for decoration. We know '\n' use for enter and '\t'  use for tab if we want to write text in the middle so we use like this -> \tTEXT\t

    float length, width; // Use float data type because value of length and width may be in decimal point.

    printf("\nEnter length of rectangle : ");
    scanf("%f", &length);

    printf("Enter width of rectangle : ");
    scanf("%f", &width);

    printf("\nArea of rectangle is %.2f\n", length * width); // I use %.2f because I want only 2 value after decimal point.

    // Area of square [Formula : Side * Side]

    printf("\n\tArea of SQUARE\t\n"); // It is only for decoration.

    float side; // Use float data type because value of side may be in decimal point.

    printf("\nEnter side of square : ");
    scanf("%f", &side);

    printf("\nArea of square is %.2f\n", side * side); // I use %.2f because I want only 2 value after decimal point.

    // Area of Circle [Formula : PI(3.14) * Radius * Radius]

    printf("\n\tArea of CIRCLE\t\n");

    float radius; // Now we know why we use float data type!

    printf("\nEnter radius of circle : ");
    scanf("%f", &radius);

    printf("\nArea of circle is %.2f", 3.14 * radius * radius); // Now we know why we use %.2f.

    /*
    You have notice or not? First we declare variables after main function ['float length , width';].
    And after main function we declare variable in the middle of the main function like 'float side' and 'float radius'.
    So instead of declaring variables in middle we can delcare all variables after the main function which is considered as good practice.
    Although this method is also correct but in some compiler it can gave error.
    */

    return 0;
}