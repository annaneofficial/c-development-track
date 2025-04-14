#include <stdio.h>

int main() {
    int num;  // User input (3-digit number)
    int hundreds, tens, units;  // Digits

    // Get input from user
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract digits
    hundreds = num / 100;       // Hundreds place
    tens = (num / 10) % 10;     // Tens place
    units = num % 10;           // Units place

    // Print reversed number
    printf("Reversed number: %d%d%d\n", units, tens, hundreds);

    return 0;
}