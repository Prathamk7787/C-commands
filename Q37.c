#include <stdio.h>

// Function to find the GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    // Keep finding remainder until b becomes 0
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder of a divided by b
        a = temp;
    }
    return a; // When b becomes 0, a is the GCD
}

int main() {
    int num1, num2, lcm;
    
    // Step 1: Ask user for two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Step 2: Handle case when any number is 0
    if (num1 == 0 || num2 == 0) {
        printf("LCM is 0 (since one number is 0)\n");
        return 0;
    }
    
    // Step 3: Calculate LCM using the formula
    // LCM × GCD = num1 × num2
    lcm = (num1 * num2) / gcd(num1, num2);
    
    // Step 4: Show the result
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    
    return 0; // End of program
}

