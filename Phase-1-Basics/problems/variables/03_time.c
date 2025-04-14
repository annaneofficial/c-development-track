#include <stdio.h>
/*
    Write a program to convert Seconds to: hours, minutes, and seconds
 */

int main() {
    int total_seconds;
    int hours, minutes, seconds;
    
    // Get input from user
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    
    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60; // Remaining seconds converted to minutes
    seconds = total_seconds % 60;          // Remaining seconds after minutes
    
    // Display the result
    printf("Converted time: %02d:%02d:%02d\n", hours, minutes, seconds);
    
    return 0;
}