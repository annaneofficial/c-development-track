#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 20; i++) {
        sum += i;
    }

    printf("Sum of first 20 natural numbers: %d\n", sum);
    
    return 0;
}