// WAP that takes two numbers from user and add both using pointer.
#include <stdio.h>

int main()
{
    int a, b, sum;
    int *ptr_a = &a;
    int *ptr_b = &b;
    printf("Enter the two number for sum: ");
    scanf("%d%d", &a, &b);

    sum = *ptr_a + *ptr_b;
    printf("Sum = %d\n", sum);

    return 0;
}