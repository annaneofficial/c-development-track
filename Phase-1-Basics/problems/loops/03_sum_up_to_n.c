#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input validation: Ensure the number is strictly greater than 1
    do {
        printf("Enter an integer greater than 1: ");
        scanf("%d", &n);

        if (n <= 1)
            printf("Invalid input! Please enter a number greater than 1.\n");

    } while (n <= 1);

    // Calculate sum using a while loop
    printf("Sum calculation: ");
    while (i <= n) {
        sum += i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
        i++;
    }

    printf(" = %d\n", sum);

    return 0;
}
