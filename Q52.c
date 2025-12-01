#include <stdio.h>

int main() {
    int i;

    // Print first group: 4 stars (one per line)
    for (i = 0; i < 4; i++) {
        printf("*\n");
    }

    // Print second group: 5 stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }

    // Print third group: 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }

    // Print fourth group: 1 star
    printf("*\n");

    return 0;
}
