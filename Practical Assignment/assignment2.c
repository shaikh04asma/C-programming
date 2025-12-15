// Program to find factorial of a number using recursion

#include <stdio.h>

long factorial(long number); // Function declaration

int main() {
    long inputNumber, result;

    // Display message using puts()
    puts("Enter a number to find its factorial:");
    
    // Take user input using scanf()
    scanf("%ld", &inputNumber);

    // Validate negative input
    if (inputNumber < 0) {
        puts("Error: Factorial of a negative number does not exist.");
        return 0;
    }

    // Call recursive function
    result = factorial(inputNumber);

    // Display result using printf because puts() cannot print formatted numbers
    printf("Factorial of %ld = %ld\n", inputNumber, result);

    return 0;
}

// Recursive factorial function
long factorial(long number) {
    if (number == 0 || number == 1)
        return 1; // Base case
    else
        return number * factorial(number - 1); // Recursive call
}
