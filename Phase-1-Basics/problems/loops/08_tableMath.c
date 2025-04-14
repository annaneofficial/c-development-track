/**
 * @file multiplication_table.c
 * @brief This program prints a 10x10 multiplication table in a formatted manner.
 */

 #include <stdio.h>

 /**
  * @brief Main function that generates and prints the multiplication table.
  * 
  * The table displays products of numbers from 1 to 10 in a grid format with 
  * row and column headers. The output is formatted for better readability.
  * 
  * @return int Returns 0 upon successful execution.
  */
 int main() {
     // Print table header
     printf(" x*Y | ");  // Column title
     
     // Print column numbers (1 through 10)
     for (int i = 1; i <= 10; i++) {
         printf(" %2d ", i);  // %2d ensures consistent spacing for 1- and 2-digit numbers
     }
     printf("\n");  // Move to next line after header
     
     // Print separator line (dashes)
     for (int i = 1; i <= 15; i++) {
         printf("---");  // Each column is 3 dashes plus 1 space (from above)
     }
     printf("\n");  // Move to next line after separator
     
     // Generate and print the multiplication table
     for (int i = 1; i <= 10; i++) {
         printf(" %2d  | ", i);  // Row header with consistent spacing
         
         // Calculate and print products for current row
         for (int j = 1; j <= 10; j++) {
             printf(" %2d ", i * j);  // %2d ensures proper alignment
         }
         printf("\n");  // New line after each row
     }
 
     return 0;  // Indicate successful program termination
 }