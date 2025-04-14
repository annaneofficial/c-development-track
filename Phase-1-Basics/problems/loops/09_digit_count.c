/*
    This program counts how many digits are in a number entered by the user.
    It does this by repeatedly dividing the number by 10
    and counting how many times it can do that until the number becomes 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long N;
    int digit_count = 0;

    printf("Please enter a number: ");
    scanf("%ld", &N);

    do {
        digit_count++;
        N = N / 10;
    } while (N != 0);

    printf("Total number of digits: %d\n", digit_count);

    return 0;
}
