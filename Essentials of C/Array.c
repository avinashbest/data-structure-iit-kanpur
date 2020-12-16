#include <stdio.h>

int main(void)
{
    int marks[5];
    //Assigning Vaule
    marks[0] = 89;
    marks[1] = 48;
    marks[2] = 69;
    marks[3] = 65;
    marks[4] = 70;
    //Printing Values
    printf("Value is %d\n", marks[0]);
    printf("Value is %d\n", marks[1]);
    printf("Value is %d\n", marks[2]);
    printf("Value is %d\n", marks[3]);
    printf("Value is %d\n", marks[4]);
    //Another Method
    printf("\n==================================\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value is %d\n", marks[i]);
    }

    return 0;
}