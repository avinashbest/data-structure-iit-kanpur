#include <stdio.h>
// => Add Element In An Array , using following
// 		By value
// 		By Index
// 		By Position

void main()
{
    int ar[1000];
    int n, i, f, index, value;

    printf("How many elements you want to store? "); //Size of the array
    scanf("%d", &n);

    //Taking Input
    printf("\nEnter %d number:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    //Taking value to be changed
    printf("Index at which you want to insert element: ");
    scanf("%d", &index);

    printf("New value at that place will be? ");
    scanf("%d", &value);

    ar[index + 2] = ar[index + 1];
    ar[index + 1] = ar[index];
    ar[index] = value;
    //Printing the Modified Array
    printf("\nAfter Inserting Element New Array is:\n");
    for (i = 0; i < n + 1; i++)
    {
        printf("\n%d", ar[i]);
    }
}
