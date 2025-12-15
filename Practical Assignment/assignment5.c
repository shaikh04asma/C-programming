/* Program to check whether the entered year is a leap year */

#include <stdio.h>

int main(void) {
    int inputYear; /* Variable to store the entered year */

    /* Prompt user for input */
    printf("Enter a year: ");
    scanf("%d", &inputYear);

    /* Condition to check leap year:
       A year is a leap year if:
       - It is divisible by 4 AND
       - NOT divisible by 100, EXCEPT if also divisible by 400
    */
    if ((inputYear % 400 == 0) || (inputYear % 4 == 0 && inputYear % 100 != 0))
        printf("%d is a leap year.\n", inputYear);
    else
        printf("%d is not a leap year.\n", inputYear);

    return 0;
}
