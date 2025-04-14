#include <stdio.h>

int main() {
    int product;

    printf("Multiplication table of 7:\n");

    for (int i = 1; i <= 10; i++) {
        product = 7 * i;
        printf("7 x %d = %d\n", i, product);
    }

    return 0;
}
