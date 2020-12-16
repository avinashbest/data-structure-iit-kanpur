// Create an array of 25 size and display all even numbers.
#include <stdio.h>

int main()
{
    int arr[25];

    for (int i = 0; i < 25; i++)
    {
        arr[i] = i*2;
    }
    printf("\n");

    for (int i = 0; i < 25; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}