#include <stdio.h>

int main() {
    int N;
    
start:
    printf("Enter a number between 1 to 5: ");
    scanf("%d", &N);

    if (N < 1 || N > 5) {
        goto start;  // Jump to the 'start' label if the input is out of range
    } else {
        printf("You entered a valid number: %d\n", N);
    }

    return 0;
}
