// Question : Write a program to find the volume of a cube, sphere, and cylinder.

#include <stdio.h>

int main()
{

    /*
    Volume of Cube [Formula : Side * Side * Side]
    Volume of Sphere [Formula : 4/3 * PI * r * r * r] (where r is Radius)
    Volume of Cylinder [Formula : PI * r * r * height] (wher r is radius)

    For volume of above we use float data type because side, radius and height of above can be in decimal point.
    */

    float side, radius, height;

    printf("\n\tVolume of CUBE\t\n"); // It is only for decoration. We know '\n' use for enter and '\t'  use for tab if we want to write text in the middle so we use like this -> \tTEXT\t

    printf("\nEnter side of cube : ");
    scanf("%f", &side);

    printf("\nVolume of cube is %.2f\n", side * side * side); // I use %.2f because I want only 2 value after decimal point.

    printf("\n\tVolume of SPHERE\t\n");

    printf("\nEnter radius of sphere : ");
    scanf("%f", &radius);

    printf("\nVolume of sphere is %.2f\n", (4.0 / 3.0) * 3.14 * radius * radius * radius);
    // NOTE : Above we should use (4.0/3.0) if we use (4/3) so it gives wrong result. As we know if we divide (5/2) so its correct value is 2.5 but in C language
    //        its value be 2 because in int data type after decimal point value its not taken.

    printf("\n\tVolume of CYLINDER\t\n");

    printf("\nEnter radius of cylinder : ");
    scanf("%f", &radius);
    printf("\nEnter height of cylinder : ");
    scanf("%f", &height);

    printf("\nVolume of cylinder is %.2f", 3.14 * radius * radius * height);

    return 0;
}