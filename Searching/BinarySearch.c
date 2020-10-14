#include <stdio.h>
// PREREQUISITE: Array should be Sorted(Ascending / Descending) first then we can only use Binary Search
int main(void)
{
    int arr[] = {1, 5, 7, 9, 11, 34, 45, 65, 76, 77, 80, 81, 83, 90, 110};
    int start = 0, end = 14, mid, flag = 0, search_element;

    printf("\nEnter Search Element: ");
    scanf("%d", &search_element);

    while ((start <= end) && (search_element != arr[mid]))
    {
        mid = (start + end) / 2;
        if (arr[mid] == search_element)
        {
            printf("\nElement is found at Position %d", mid + 1);
            flag = 1;
            break;
        }
        else if (search_element < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("\nElement is not Found");
    }

    return 0;
}