#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i, length;
    
    // Step 1: Ask the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Step 2: Find the length of the entered binary string
    length = strlen(binary);
    
    // Step 3: Check if the input contains only 0s and 1s
    for (i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid input! Please enter only 0s and 1s.\n");
            return 0;
        }
    }
    
    // Step 4: Print the 1’s complement
    // (Change all 0s to 1s and all 1s to 0s)
    printf("The 1’s complement is: ");
    for (i = 0; i < length; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }
    
    printf("\n"); // Move to new line for clean output
    
    return 0; // End of program
}
