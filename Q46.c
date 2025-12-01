#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int i, j;

    // Print a 5x5 block of stars
    // Outer loop controls the number of rows
    for (i = 1; i <= rows; i++) {

        // Inner loop prints stars in each row
        for (j = 1; j <= cols; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
