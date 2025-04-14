#include <stdio.h>

int main() {
    int num, count = 0;
    
    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;  // Exit the loop when 0 is entered
        }
        
        count++;
    }

    printf("You entered %d numbers.\n", count);
    return 0;
}
