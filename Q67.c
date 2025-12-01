#include <stdio.h>

int main() {
    int n, i, key, position;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];  // VLA
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    
    printf("Enter the position (0-based index) to insert: ");
    scanf("%d", &position);
    
    if (position < 0 || position > n) {
        printf("Invalid position.\n");
        return 1;
    }
    
    // Shift
    for (i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = key;
    
    printf("Array after insertion:\n");
    for (i = 0; i <= n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
