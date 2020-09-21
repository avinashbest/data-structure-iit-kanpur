#include <stdio.h>

int main()
{
    int a, b, sum;
    int *ptr_a = &a;
    int *ptr_b = &b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    sum = *ptr_a + *ptr_b;
    // sum = value of address ptr_a + value of address ptr_b
    printf("Sum = %d\n", sum);

    return 0;
}