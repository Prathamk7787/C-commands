#include <stdio.h>

int main() {
    int d;
    printf("Enter number (1-7): ");
    scanf("%d", &d);

    switch(d) {
        case 1: printf("Sun\n"); break;
        case 2: printf("Mon\n"); break;
        case 3: printf("Tue\n"); break;
        case 4: printf("Wed\n"); break;
        case 5: printf("Thu\n"); break;
        case 6: printf("Fri\n"); break;
        case 7: printf("Sat\n"); break;
        default: printf("Invalid\n");
    }

    return 0;
}
