// Question : Write a program to enter a number from the user and display the month name. If number>= 13 then display invalid input using switch case.
// NOTE : Same question we can also solve using if and else if condition.
#include <stdio.h>

int main()
{

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;

    default:
        printf("Invalid Input!"); // If value of n enter by the user is less than 1 or greater than 12[or n>=13(As per question)] so show invalid.
    }

    /*
    You have notice or not? Above we use break statement after each case because if we not use break statement so all month will be print.
    If user enter 5 so output will be from May month to December that's why we use break statement.
    */
    return 0;
}