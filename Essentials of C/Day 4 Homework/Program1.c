#include <stdio.h>
//No Argument but Return
int sum()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}

int main(void)
{
    int s;
    s = sum();
    printf("Sum = %d", s);
    return 0;
}