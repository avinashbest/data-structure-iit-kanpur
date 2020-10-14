/*Write a program to swap two number by using third variable*/
#include <stdio.h>

void main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before Swap: %d and %d\n", a, b);

    //Swapping algorithm
    temp = a;
    a = b;
    b = temp;

    printf("After Swap: %d and %d\n\n", a, b);
}