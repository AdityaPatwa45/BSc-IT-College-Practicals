// Question : Write a program to find area and perimeter of a circle using call by reference

#include <stdio.h>

void circle(float *r, float *area, float *perimeter);

int main()
{

    float r, area, perimeter;

    printf("Enter radius of the circle : ");
    scanf("%f", &r);

    circle(&r, &area, &perimeter);

    printf("Area of the circle is %.2f", area);
    printf("\nPerimeter of the circle is %.2f", perimeter);

    return 0;
}

void circle(float *r, float *area, float *perimeter)
{
    *area = 3.14 * *r * *r;

    *perimeter = 2 * 3.14 * *r;
}