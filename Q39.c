#include <stdio.h>

int main() {
    int num, product = 1, remainder, hasOdd = 0;
    
    // Step 1: Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Step 2: Handle special case when number is 0
    if (num == 0) {
        printf("No odd digits, product is 0\n");
        return 0;
    }
    
    // Step 3: Go through each digit of the number
    while (num != 0) {
        remainder = num % 10;  // Extract the last digit
        
        // Step 4: Check if the digit is odd
        if (remainder % 2 != 0) {
            product = product * remainder; // Multiply odd digits
            hasOdd = 1; // Mark that we found an odd digit
        }
        
        num = num / 10; // Remove the last digit
    }
    
    // Step 5: Display result
    if (hasOdd) {
        printf("The product of all odd digits is: %d\n", product);
    } else {
        printf("There are no odd digits, so product is 0\n");
    }
    
    return 0; // End of program
}
