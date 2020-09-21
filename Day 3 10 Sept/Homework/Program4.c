/*Write a program to swap two number without using third variable*/
#include <stdio.h>

void main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before Swap: %d and %d\n", a, b);

    //Swapping algorithm
    a = a + b; //a = 30 (10+20)
    b = a - b; //b = 10 (10-20)
    a = a - b; //a = 20 (30-10)

    printf("After Swap: %d and %d\n\n", a, b);
}