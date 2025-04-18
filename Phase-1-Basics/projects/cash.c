#include <stdio.h>

int get_exchange(int cents);

int main()
{
    int cents;

    // Get valid input
    do
    {
        printf("Change owed: ");
        scanf("%d", &cents);
    } while (cents < 0);

    int coins = get_exchange(cents);

    printf("Coins: %d\n", coins);
    return 0;
}

int get_exchange(int n)
{
    int coins = 0;

    while (n > 0)
    {
        if (n >= 25)
        {
            n -= 25;
        }
        else if (n >= 10)
        {
            n -= 10;
        }
        else if (n >= 5)
        {
            n -= 5;
        }
        else
        {
            n -= 1;
        }
        coins++;
    }

    return coins;
}