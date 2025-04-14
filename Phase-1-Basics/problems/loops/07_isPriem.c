#include <stdio.h>

int main()
{
    int number;
    int count;
    int is_prime = 1;  // Assume number is prime initially

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("The number %d is not a prime number.\n", number);
        return 0;
    }

    for (count = 2; count < number; count++)
    {
        if (number % count == 0)
        {
            is_prime = 0; // Found a divisor, so it's not prime
            break;
        }
    }

    if (is_prime)
        printf("Yes, %d is a prime number.\n", number);
    else
        printf("No, %d is not a prime number.\n", number);

    return 0;
}
