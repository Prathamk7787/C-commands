#include <stdio.h>

int main() {
    int n, i, key;
    int found = 0;         // Will become 1 if we find the number
    int position = -1;     // Will store index where number is found

    // Ask user how many elements they want to store
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Take elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the number to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search: checking each element one by one
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;        // Mark that key is found
            position = i;     // Save the index
            break;            // Stop after first match
        }
    }

    // Print result
    if (found) {
        printf("Element %d found at index %d.\n", key, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
