#include <stdio.h>

int main() {
    int n1, n2, i;

    // Ask for size of first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    // Create first array
    int arr1[n1];

    // Take input for first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Ask for size of second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    // Create second array
    int arr2[n2];

    // Take input for second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create merged array with size n1 + n2
    int merged[n1 + n2];

    // Copy elements of first array into merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array into merged array after arr1
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
