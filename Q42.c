#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    // Step 1: Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Step 2: Handle invalid input (zero or negative numbers)
    if (num <= 0) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }
    
    // Step 3: Find all divisors (excluding the number itself)
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;  // Add divisor to sum
        }
    }
    
    // Step 4: Check if the number is perfect
    // A number is perfect if the sum of its proper divisors equals the number itself
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0; // End of program
}
