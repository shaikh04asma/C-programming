#include <stdio.h>
int main()
{
    int num, k = 1, sum = 0;     // num to store user number
    printf("Enter any number:"); // instruction to user
    scanf("%d", &num);           // read and store
    while (num != 0)             // number should not zero
    {
        k = num % 10;
        sum = sum + k;
        k = num / 10;
        num = k;
    }
    printf("Sum of the digits: %d", sum);
    return 0;
}