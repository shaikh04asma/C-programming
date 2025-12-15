#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);   // Space before %c to avoid newline issues

    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error! Modulo by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}

