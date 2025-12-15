/* Program to find the largest among three numbers */

#include <stdio.h>

int main(void) {
    double firstNumber, secondNumber, thirdNumber, largestNumber; /* descriptive variables */

    /* Prompt user and read three numbers */
    printf("Enter three numbers separated by spaces: ");
    if (scanf("%lf %lf %lf", &firstNumber, &secondNumber, &thirdNumber) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    /* Initialize largestNumber to the first input, then compare with others */
    largestNumber = firstNumber;
    if (secondNumber > largestNumber) largestNumber = secondNumber;
    if (thirdNumber  > largestNumber) largestNumber = thirdNumber;

    /* Output result (uses %g to present integer-like numbers cleanly as well as decimals) */
    printf("Largest number = %g\n", largestNumber);
    return 0;
}
