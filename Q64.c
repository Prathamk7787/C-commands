#include <stdio.h>

int main() {
    long long num;                    // To store the input number
    int digit;                        // To store each extracted digit
    int freq[10] = {0};               // Frequency array for digits 0-9
    int maxFreq = 0;                  // To track highest frequency
    int mostFrequentDigit = -1;       // To store the digit with highest count

    // Ask user for a number
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // If number is negative, convert it to positive
    if (num < 0) {
        num = -num;
    }

    // Count how many times each digit appears
    while (num != 0) {
        digit = num % 10;     // Extract last digit
        freq[digit]++;         // Increase count of that digit
        num /= 10;             // Remove last digit
    }

    // Find digit with maximum occurrence
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    // Display result
    if (mostFrequentDigit == -1) {
        printf("No digits in the number.\n");   // For input like 0 or empty
    } else {
        printf("The digit that occurs the most is %d (appears %d times).\n",
               mostFrequentDigit, maxFreq);
    }

    return 0;
}
