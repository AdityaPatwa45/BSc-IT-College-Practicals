// Question : Write a program that performs multiplication of matrices.

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

    if (c1 != r2)
    {
        printf("\nFor multiplication of two matrices, column of matirx I and row of matrix II should be equal!\n");
        return 0;
    }

    int a[r1][c1];
    int b[r2][c2];
    int m[r1][c2];

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

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\n\tMultiplication\t\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}