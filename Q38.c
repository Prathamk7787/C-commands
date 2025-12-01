#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    
    // Step 1: Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Step 2: Handle special case when number is 0
    if (num == 0) {
        printf("Sum of digits is 0\n");
        return 0;
    }
    
    // Step 3: Use a loop to find the sum of digits
    // Example: if num = 123, we do 3 + 2 + 1
    while (num != 0) {
        remainder = num % 10;   // Take the last digit
        sum = sum + remainder;  // Add it to sum
        num = num / 10;         // Remove the last digit
    }
    
    // Step 4: Display the total sum of digits
    printf("The sum of digits is: %d\n", sum);
    
    return 0; // End of program
}
