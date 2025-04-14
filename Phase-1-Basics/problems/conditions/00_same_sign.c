#include <stdio.h>

int main() {
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    if (a * b > 0)
        printf("They have the same sign.\n");
    else
        printf("They do not have the same sign.\n");

    return 0;
}