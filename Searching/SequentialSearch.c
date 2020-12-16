#include <stdio.h>
//Sequential Search
int main(void)
{
    int arr[100];
    int n, flag = 0;
    int search_element;
    printf("\nHow many element you want to store? ");
    scanf("%d", &n);
    //Taking Input
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Element You Want To Search: ");
    scanf("%d", &search_element);
    //Searching algorithm
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_element)
        {
            printf("\nElement is Found at Index %d and Position %d", i, i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Element is not Found");
    }

    return 0;
}