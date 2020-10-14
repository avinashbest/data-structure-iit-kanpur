//WAP to find the highest and lowest element in an array.
#include <stdio.h>

int main()
{
    int a[50], size, i, big, small;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\nEnter the %d elements of the array: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    big = a[0]; // initializing
    for (i = 1; i < size; i++)
    {
        if (big < a[i]) // if larger value is encountered
        {
            big = a[i]; // update the value of big
        }
    }
    printf("\n\nThe largest element is: %d", big);

    small = a[0]; // initializing
    for (i = 1; i < size; i++)
    {
        if (small > a[i]) // if smaller value is encountered
        {
            small = a[i]; // update the value of small
        }
    }
    printf("\nThe smallest element is: %d\n\n", small);
    return 0;
}