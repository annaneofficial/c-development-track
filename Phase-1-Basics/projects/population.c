#include <stdio.h>

int main()
{
    int start_size;
    int end_size;
    int year;

    do
    {
        printf("start size: ");
        scanf("%d",&start_size);

    } while (start_size < 9 );

    do
    {
        printf("End size: ");
        scanf("%d",&end_size);

    } while (end_size < start_size);

    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        year++;
    }
    

   
    printf("Year: %d",year);
}