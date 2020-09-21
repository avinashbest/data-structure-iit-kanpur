#include <stdio.h>

void main()
{
    int a, b, sub;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    int *ptr_a = &a;
    int *ptr_b = &b;

    sub = *ptr_a - *ptr_b;
    // subtract = value of address ptr_a + value of address ptr_b
    printf("Subtract = %d\n", sub);
}