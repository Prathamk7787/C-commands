#include <stdio.h>

int main() {
    int n;
    int i, started = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit) started = 1;
        if (started) printf("%d", bit);
    }
    printf("\n");
    return 0;
}
