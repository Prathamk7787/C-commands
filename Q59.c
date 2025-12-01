#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

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

    // Check each element to see if it's even or odd
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;     // Increase even count
        } else {
            oddCount++;      // Increase odd count
        }
    }

    // Display results
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}