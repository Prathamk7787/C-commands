#include <stdio.h>

int main() {
    int rows = 7;  // Total number of rows (odd number recommended)
    int i, j, k;

    // ---------------------------
    // UPPER HALF OF THE DIAMOND
    // (includes the center row)
    // ---------------------------
    for (i = 1; i <= rows / 2 + 1; i++) {

        // Print leading spaces to center the stars
        for (k = 1; k <= rows / 2 + 1 - i; k++) {
            printf(" ");
        }

        // Print stars: 1, 3, 5, 7 ...
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // ---------------------------
    // LOWER HALF OF THE DIAMOND
    // ---------------------------
    for (i = rows / 2; i >= 1; i--) {

        // Print the same leading spaces but in reverse order
        for (k = 1; k <= rows / 2 + 1 - i; k++) {
            printf(" ");
        }

        // Print stars decreasing: 5, 3, 1
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
