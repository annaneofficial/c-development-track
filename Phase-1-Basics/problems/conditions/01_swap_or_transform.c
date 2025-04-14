#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Please enter the value of A: ");
    scanf("%d", &A);
    printf("Please enter the value of B: ");
    scanf("%d", &B);

    if (A * B > 0) {  // If A and B have the same sign
        C = A;
        A = B;
        B = C;
    } else {  // If A and B have different signs
        C = A + B;
        D = A * B;
        A = C;
        B = D;
    }

    printf("The new value of A is: %d\n", A);
    printf("The new value of B is: %d\n", B);

    return 0;
}