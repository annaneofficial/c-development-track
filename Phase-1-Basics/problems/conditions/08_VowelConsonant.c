#include <stdio.h>

int main() {
    char ch;
    
    // Get user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase for case insensitivity
    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;
    }

    // Check if the character is an alphabet
    if (ch >= 'a' && ch <= 'z') {
        // Check if it's a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet character.\n");
    }

    return 0;
}