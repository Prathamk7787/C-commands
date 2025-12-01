#include <stdio.h>

int main() {
    int n, i, key;
    int low, high, mid;
    int found = 0, position = -1;

    // Step 1: Take input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Ask the user which element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Step 4: Perform binary search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;  // Avoids possible overflow

        if (arr[mid] == key) {    // Found!
            found = 1;
            position = mid;
            break;
        }
        else if (arr[mid] < key) { // Search in right half
            low = mid + 1;
        }
        else {                     // Search in left half
            high = mid - 1;
        }
    }

    // Step 5: Display result
    if (found) {
        printf("Element %d found at index %d.\n", key, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
