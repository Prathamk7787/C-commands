#include <stdio.h>

int main() {
    int n, i, key, position;
    
    // Step 1: Take array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Step 2: Declare array with one extra slot for insertion
    int arr[n + 1];
    
    // Step 3: Take sorted input
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Step 4: Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    
    // Step 5: Find correct position
    // Default position = insert at end
    position = n;
    
    for (i = 0; i < n; ++i) {
        if (arr[i] > key) {
            position = i;
            break;
        }
    }
    
    // Step 6: Shift elements right
    for (i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    
    // Step 7: Insert key
    arr[position] = key;
    
    // Step 8: Print final array
    printf("Array after insertion:\n");
    for (i = 0; i <= n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
