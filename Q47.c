#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Print a right-angled triangle made of stars
    // Outer loop controls how many rows will be printed
    for (i = 1; i <= rows; i++) {

        // Inner loop prints stars in each row
        // Number of stars increases with each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Go to next line after printing stars of the current row
        printf("\n");
    }

    return 0;
}
