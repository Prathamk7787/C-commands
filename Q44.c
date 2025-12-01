#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator, denominator;

    // Step 1: Ask the user how many terms they want
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Step 2: Handle invalid input
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 0;
    }

    // Step 3: Calculate the sum of the series
    // Series: (1/2) + (3/4) + (5/6) + (7/8) + ...
    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;       // Odd numbers: 1, 3, 5, 7, ...
        denominator = numerator + 1; // Denominator is always one more than numerator

        sum = sum + (float)numerator / denominator; // Add each term
    }

    // Step 4: Display the result
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0; // End of program
}
