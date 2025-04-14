#include <stdio.h>

int main() {
    int n, i , product;

    // Get user input and validate it
    do {
        printf("Enter a number (1-10): ");
        scanf("%d", &n);

        if (n < 1 || n > 10)
            printf("Invalid input! Please enter a number between 1 and 10.\n");

    } while (n < 1 || n > 10);

    // Print multiplication table using while loop
    printf("Multiplication table of %d:\n", n);
    
    i = 1;
    while (i <= 10) {
        product = n * i;
        printf("%d x %d = %d\n", n, i, product);
        i++;
    }

    return 0;
}
