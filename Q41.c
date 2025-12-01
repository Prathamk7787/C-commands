#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numStr[100];
    int length;
    char temp;
    
    // Step 1: Ask the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%s", numStr);
    
    // Step 2: Find the length of the number (as a string)
    length = strlen(numStr);
    
    // Step 3: Check if the input contains only digits (0–9)
    for (int i = 0; i < length; i++) {
        if (numStr[i] < '0' || numStr[i] > '9') {
            printf("Invalid input! Please enter digits only.\n");
            return 0;
        }
    }
    
    // Step 4: If the number has only one digit, nothing to swap
    if (length == 1) {
        printf("Swapped number: %s\n", numStr);
        return 0;
    }
    
    // Step 5: Swap the first and last digits
    temp = numStr[0];
    numStr[0] = numStr[length - 1];
    numStr[length - 1] = temp;
    
    // Step 6: Display the new number
    printf("The number after swapping first and last digits is: %s\n", numStr);
    
    return 0; // End of program
}
