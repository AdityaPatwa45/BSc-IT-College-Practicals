// Question : Write a program that performs addition and subtraction of matrices.

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("\n\tMatrix I\t\n");

    printf("\nEnter number of rows : ");
    scanf("%d", &r1);

    printf("Enter number of columns : ");
    scanf("%d", &c1);

    printf("\n\tMatrix II\t\n");

    printf("\nEnter number of rows : ");
    scanf("%d", &r2);

    printf("Enter number of columns : ");
    scanf("%d", &c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("\nFor addition of two matrices, number of rows and number of columns of both matrices should be same!\n");
        return 0;
    }

    int a[r1][c1];
    int b[r2][c2];

    printf("\nEnter matrix I\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter matrix II\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nAddition\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    printf("\nSubstraction\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    return 0;
}