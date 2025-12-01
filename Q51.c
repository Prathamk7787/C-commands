#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    // Print a right-aligned triangle made of numbers
    for (i = 1; i <= rows; i++) {

        // Print spaces to push numbers to the right
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        // Print numbers starting from (rows - i + 1) up to rows
        // Example for rows = 5:
        // Row 1 -> 5
        // Row 2 -> 45
        // Row 3 -> 345
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
