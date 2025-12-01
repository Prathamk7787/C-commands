#include <stdio.h>

int main() {
    int n, i, temp;

    // Ask user how many elements the array should have
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Take array input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array by swapping elements from both ends
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print the reversed array
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
