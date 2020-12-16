/*Write a program to add numbers in which one is integer and other one is floating*/
#include <stdio.h>

void main()
{
    int a;
    float b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%f", &b);
    printf("Sum of %d and %f is: %f", a, b, (a + b));
}