//Create an array of size 30 and find the smallest number from array.
#include <stdio.h>

int main()
{
    int a[30], i, small;

    printf("\n\nInput 30 elements in the array: \n");
    for (i = 0; i < 30; i++)
        scanf("%d", &a[i]);

    small = a[0]; // initializing
    for (i = 1; i < 30; i++)
    {
        if (small > a[i]) // if smaller value is encountered
        {
            small = a[i]; // update the value of small
        }
    }
    printf("\nThe smallest element is: %d\n\n", small);

    return 0;
}