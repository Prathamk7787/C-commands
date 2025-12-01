#include <stdio.h>

// Function to find the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;  // Multiply each number up to n
    }
    return fact; // Return the factorial value
}

int main() {
    int num, originalNum, remainder, sum = 0;
    
    // Step 1: Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Step 2: Store the original number (for comparison later)
    originalNum = num;
    
    // Step 3: Find the sum of factorials of each digit
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        sum = sum + factorial(remainder); // Add factorial of the digit
        num = num / 10;                  // Remove the last digit
    }
    
    // Step 4: Check if sum equals the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }
    
    return 0; // End of program
}
