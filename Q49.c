#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Print a right-aligned number pattern
    // Outer loop controls the row number
    for (i = 1; i <= rows; i++) {

        // Inner loop prints numbers starting from (rows - i + 1) up to rows
        // Example for rows = 5:
        // Row 1 → prints: 5
        // Row 2 → prints: 4 5
        // Row 3 → prints: 3 4 5
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
