#include <stdio.h>

void show()
{
    printf("Hello");
    return 1;
    printf("Bye");
}

void main()
{
    int n;
    n = show();
    printf("Value is =  %d", n);
}