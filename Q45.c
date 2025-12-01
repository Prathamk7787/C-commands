#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2, denominator = 3;

    // Step 1: Ask the user for number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Step 2: Validate the input
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 0;
    }

    // Step 3: Add each term of the series
    // Pattern:
    // Numerators:   2, 4, 6, 8, ...
    // Denominators: 3, 7, 11, 15, ...  (each time +4)
    for (i = 1; i <= n; i++) {

        // Add the current term to the total sum
        sum = sum + (double)numerator / denominator;

        // Move to the next term
        numerator = numerator + 2;   // even numbers increasing by 2
        denominator = denominator + 4; // odd numbers increasing by 4
    }

    // Step 4: Display the result
    printf("Sum of the series up to %d terms is %.4f\n", n, sum);

    return 0;
}
