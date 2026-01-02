#include <stdio.h>
#include <math.h>
int main()
{
    int i, min, max, size, a[20];
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the element of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0]; // first element of array
    min = a[0]; // first element
    for (i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }
    printf("The Maximum number in given array is:%d\n", max);
    printf("The Minimum number in given array is:%d\n", min);
    return 0;
}