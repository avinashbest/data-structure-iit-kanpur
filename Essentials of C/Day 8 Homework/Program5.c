// WAP that takes two number from user and perform swaping using pointer.
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter Swap:\na = %d, b = %d\n\n", *x, *y);
}

int main()
{
    int a = 5, b = 7;
    printf("\nBefore Swap:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    return 0;
}