#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    int isPrime;

    // Ask the user for the upper limit
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // If n < 2 there are no primes
    if (n < 2) {
        printf("No prime numbers up to %d.\n", n);
        return 0;
    }

    // Print header
    printf("Prime numbers from 1 to %d are: ", n);

    // Check each number from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1;                 // assume i is prime
        int limit = (int)sqrt(i);    // only test up to sqrt(i)

        // Try dividing i by every number from 2 to limit
        for (j = 2; j <= limit; j++) {
            if (i % j == 0) {       // divisible -> not prime
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
