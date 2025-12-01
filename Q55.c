#include <stdio.h>

int main() {
    int n, i, j;
    int isPrime; // This will help us check if a number is prime or not

    // Ask the user for the upper limit
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // If n is less than 2, there are no prime numbers
    if (n < 2) {
        printf("No prime numbers up to %d.\n", n);
        return 0;
    }

    // Start checking each number from 2 to n
    printf("Prime numbers from 1 to %d are: ", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Let's assume the number is prime

        // Try dividing the number by all numbers from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // If divisible, it's not a prime number
                isPrime = 0;
                break; // No need to check further
            }
        }

        // If the number stayed prime, print it
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
