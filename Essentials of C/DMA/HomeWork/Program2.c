#include <stdio.h>
#include <stdlib.h>
//Create multiple block according to user choice to store floating point numbers. Display all elements.
int main(void)
{
    int n;
    float *ptr;
    printf("Enter a block size: ");
    scanf("%d", &n);

    ptr = (float *)calloc(n, sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Input Element %d: ", i + 1);
        scanf("%f", ptr + i);
    }
    printf("\nDisplaying Elements:-\n");
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        printf("%.3f\n", *(ptr + i));
    }
    free(ptr);
    return 0;
}