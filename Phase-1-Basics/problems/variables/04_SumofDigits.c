#include <stdio.h>

int main() {
    int number;
    int digit1, digit2, digit3;
    int sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Extract each digit
    digit1 = number / 100;          // First digit (hundreds place)
    digit2 = (number / 10) % 10;    // Second digit (tens place)
    digit3 = number % 10;           // Third digit (units place)

    // Calculate the sum
    sum = digit1 + digit2 + digit3;

    printf("Sum of digits: %d + %d + %d = %d\n", digit1, digit2, digit3, sum);

    return 0;
}