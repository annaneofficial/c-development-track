#include <stdio.h>
/*
    Swap two numbers without using a third variable
*/

int main() {
    int first_number;
    int second_number;
    
    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);
    
    printf("Before swap: First = %d, Second = %d\n", first_number, second_number);
    
    // Swap using arithmetic operations
    first_number = first_number + second_number;
    second_number = first_number - second_number;
    first_number = first_number - second_number;
    
    printf("After swap: First = %d, Second = %d\n", first_number, second_number);
    
    return 0;
}