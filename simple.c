#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for the math operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt user for the two numerical inputs
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the chosen operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check to avoid a runtime division-by-zero crash
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // Executed if the user inputs any other symbol
        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;
}
