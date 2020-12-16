#include <stdio.h>

int main(void)
{
    int marks[5];
    //Taking Input in the array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number at position %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    //Printing Values
    printf("\n==================================\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value at position %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}