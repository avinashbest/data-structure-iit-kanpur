// Create an array with 25 element and again take a number from user and find whether number is available in array or not
#include <stdio.h>

void main()
{
    int element[25];
    int number, flag;
    //Assigning some values to array element
    printf("\nEnter the value in element:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &element[i]);
    }
    printf("\nWhich element you want to search? ");
    scanf("%d", &number);

    for (int i = 0; i < 25; i++)
    {
        if (element[i] == number)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("Match Found!\n\n");
    }
    else
    {
        printf("No Match Found!\n\n");
    }
}