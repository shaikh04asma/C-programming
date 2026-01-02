// Add two matrices using an array
#include <stdio.h>
#include <math.h>
int main()
{
    int a[2][2], b[2][2];
    int i, j;
    // First array
    printf("Enter element of matrix A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }

    // Second array
    printf("Enter element of matrix B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    }

    // printing and Addition of both array
    printf("\n=====Matrix Addition=====\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

            printf("%5d", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0 ;
}