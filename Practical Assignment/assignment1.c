/* Basic Calculator Program using scanf() */

#include <stdio.h>

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float number1, number2, result;
    char operator;

    /* Taking input from the user using scanf() */
    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter second number: ");
    scanf("%f", &number2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // space before %c avoids reading newline

    switch (operator)
    {
    case '+':
        result = add(number1, number2);
        printf("%.6g %c %.6g = %.6g\n", number1, operator, number2, result);
        break;

    case '-':
        result = subtract(number1, number2);
        printf("%.6g %c %.6g = %.6g\n", number1, operator, number2, result);
        break;

    case '*':
        result = multiply(number1, number2);
        printf("%.6g %c %.6g = %.6g\n", number1, operator, number2, result);
        break;

    case '/':
        if (number2 == 0)
        {
            printf("Error: Cannot divide by zero.\n");
        }
        else
        {
            result = divide(number1, number2);
            printf("%.6g %c %.6g = %.6g\n", number1, operator, number2, result);
        }
        break;

    default:
        printf("Invalid operator!\n");
    }

    return 0;
}

/* Function definitions */
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }
