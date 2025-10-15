#include <stdio.h>

int main() {
    int n, rev = 0;

    scanf("%d", &n);

    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("%d\n", rev);

    return 0;
}
