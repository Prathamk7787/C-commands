#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    //Ask the user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    //Handle cases where one number is 0
    if (num1 == 0) {
        printf("HCF is %d\n", num2);
        return 0;
    }
    if (num2 == 0) {
        printf("HCF is %d\n", num1);
        return 0;
    }
    
    //Make sure num1 is the larger number
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Keep dividing the larger number by the smaller until remainder becomes 0
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    printf("The HCF (or GCD) of the two numbers is: %d\n", num1);
    
    return 0;
}
