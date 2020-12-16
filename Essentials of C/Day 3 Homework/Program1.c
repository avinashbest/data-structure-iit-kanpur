/*Write a program to add two numbers.*/
#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum of %d and %d is: %d", a, b, (a + b));
}