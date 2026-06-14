// Question : Write a program to solve a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    // a, b, c ko int rakh sakte hain, par roots ko float hona zaroori hai
    int a, b, c;
    float d, r1, r2, realPart, imgPart;

    printf("Enter values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    // Condition 1: Real and Distinct Roots
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2.0 * a);
        r2 = (-b - sqrt(d)) / (2.0 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", r1); // %.2f point ke baad sirf 2 numbers dikhayega
        printf("Root 2 = %.2f\n", r2);
    }
    // Condition 2: Real and Equal Roots
    else if (d == 0)
    {
        r1 = -b / (2.0 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    // Condition 3: Imaginary Roots
    else
    {
        realPart = -b / (2.0 * a);
        imgPart = sqrt(-d) / (2.0 * a); // -d karne se minus minus plus ho jata hai

        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imgPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imgPart);
    }

    return 0;
}