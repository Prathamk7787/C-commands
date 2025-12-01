#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    // Print a right-aligned inverted triangle made of stars
    for (i = rows; i >= 1; i--) {

        // Print leading spaces to push stars to the right
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        // Print stars for the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to next line after printing each row
        printf("\n");
    }

    return 0;
}
