#include <stdio.h>

int main()
{
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};

    printf("\n\nArray Before Sorting:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }

    int i = 1;
    while (i < 8)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            //Two Element Swapping Algorithm
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            //Decrementing j by 1
            j--;
        }
        i++; //Incrementing i by 1
    }

    printf("\nArray After Sorting:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n\n");
    
    return 0;
}