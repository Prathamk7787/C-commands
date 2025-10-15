#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    int smaller = (num1 < num2) ? num1 : num2;

 
    for (i = 1; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF is %d\n", hcf);

    return 0;
}
