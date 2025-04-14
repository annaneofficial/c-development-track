#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num2 != 0 ? num1 / num2 : 0; // Avoid division by zero
    else {
        printf("Invalid operator!\n");
        return 1; // Exit program with error code
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
