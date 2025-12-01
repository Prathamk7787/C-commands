#include <stdio.h>

int main() {
    int n, i, max, min;

    // Ask the user how many numbers they want to enter
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Take array input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first number is both max and min
    max = arr[0];
    min = arr[0];

    // Check all elements to find the actual max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Show the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
