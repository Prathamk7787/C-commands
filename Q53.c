#include <stdio.h>

int main() {
    int rows = 9;  // Total rows for the full diamond (odd number recommended)
    int i, j, k;

    // ---------------------------
    // UPPER HALF OF THE DIAMOND
    // (includes the middle row)
    // ---------------------------
    for (i = 1; i <= rows / 2 + 1; i++) {

        // Print spaces to push stars to the center
        for (k = 1; k <= rows / 2 + 1 - i; k++) {
            printf(" ");
        }

        // Print stars: odd count → 1, 3, 5, 7, ...
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // ---------------------------
    // LOWER HALF OF THE DIAMOND
    // ---------------------------
    for (i = rows / 2; i >= 1; i--) {

        // Print spaces for alignment
        for (k = 1; k <= rows / 2 + 1 - i; k++) {
            printf(" ");
        }

        // Print stars decreasing: 7, 5, 3, 1
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
