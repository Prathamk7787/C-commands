#include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Ask the user how many numbers they want to enter
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Take input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each number and categorize it
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;    // Count positive numbers
        }
        else if (arr[i] < 0) {
            negativeCount++;    // Count negative numbers
        }
        else {
            zeroCount++;        // Count zeros
        }
    }

    // Display the results
    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);

    return 0;
}
