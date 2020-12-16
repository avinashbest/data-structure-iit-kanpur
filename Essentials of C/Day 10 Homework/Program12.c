#include <stdio.h>
// => Add Element In An Array , using following
// 		By value
// 		By Index
// 		By Position

void main()
{
    int ar[1000];
    int n, i, f, position, value;

    printf("How many elements you want to store? "); //Size of the array
    scanf("%d", &n);

    //Taking Input
    printf("\nEnter %d number:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    //Taking value to be changed
    printf("Position at which you want to insert element: ");
    scanf("%d", &position);
    position--;

    printf("New value at that place will be? ");
    scanf("%d", &value);

    ar[position + 2] = ar[position + 1];
    ar[position + 1] = ar[position];
    ar[position] = value;
    //Printing the Modified Array
    printf("\nAfter Inserting Element New Array is:\n");
    for (i = 0; i < n + 1; i++)
    {
        printf("\n%d", ar[i]);
    }
}
