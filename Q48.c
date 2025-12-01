#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Print a number triangle pattern
    // Outer loop controls the number of rows
    for (i = 1; i <= rows; i++) {

        // Inner loop prints numbers from 1 up to the row number
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Move to the next line after finishing one row
        printf("\n");
    }

    return 0;
}
