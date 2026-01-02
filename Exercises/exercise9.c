// Multiply two matrices using an array
#include <stdio.h>
#include <math.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k;
    // storing first matrix element
    printf("Enter the first matrix element=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Storing second matrix element
    printf("Enter second matrix element=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Matrix multipication logic
    printf("Multiply both matrix=\n");
    // Outer loop selects row of matrix A
    for (i = 0; i < 2; i++)
    {
        // Middle loop selects column of matrix B
        for (j = 0; j < 2; j++)
        {
            // initialize result matrix with zero
            c[i][j] = 0;
            // Inner loop performs dot product of row and column
            for (k = 0; k < 2; k++)
            {
                /* Multiply corresponding row element of matrix
                 A with column element of matrix B and add to the result matrix */
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Print resultant matrix C
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}