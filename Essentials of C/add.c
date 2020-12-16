#include <stdio.h>
/*No Argument No Return*/
void sum();

void main()
{
    sum();
}

void sum()
{
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    s = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, s);
}