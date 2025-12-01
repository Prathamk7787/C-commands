#include <stdio.h>

int main() {

    int size, i, valueToDelete;
    int found = 0;        // Flag to check if element is present
    int deleteIndex = -1; // Store index where the element is found

    // Ask user how many numbers they want to store
    printf("Enter how many elements you want in the array: ");
    scanf("%d", &size);

    // Create the array of given size
    int arr[size];

    // Take array values from the user
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask which element user wants to delete
    printf("Enter the number you want to delete: ");
    scanf("%d", &valueToDelete);

    // Search for the element
    for (i = 0; i < size; i++) {
        if (arr[i] == valueToDelete) {
            found = 1;
            deleteIndex = i;
            break; // Stop when found
        }
    }

    // If the element exists, delete it by shifting elements to the left
    if (found) {
        for (i = deleteIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // One element is removed
        printf("✔️ Element %d has been deleted.\n", valueToDelete);
    } else {
        printf("❌ Element %d not found in the array.\n", valueToDelete);
        return 0;
    }

    // Show the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
