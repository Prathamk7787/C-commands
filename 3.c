#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter length of rectangle: ");
    scanf("%d", &a);
    printf("Enter breath of rectangle: ");
    scanf("%d", &b);
    c = a * b;
    d = 2 * (a + b);
    printf("\nPerimeter of rectangle: %d", d);
    printf("\nArea of rectangle: %d", c);  
}
