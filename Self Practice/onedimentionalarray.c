#include <stdio.h>
int main()
{
    int a[6], n, i;
    printf("Enter the values of array\n");
    scanf("%d", &n); // number of element
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // take value of array
    
    }
    
    printf("The values are:");
    for (i = 0; i < n; i++)
    {
        printf("\n a[%d] = %d\n", i, a[i]); // print index and values too
    }

     
}