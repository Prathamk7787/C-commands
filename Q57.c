#include <stdio.h>

int main() {
    int n, i, sum = 0;

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

    // Add all the elements of the array
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Show the result
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
