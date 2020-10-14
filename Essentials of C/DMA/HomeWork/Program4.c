#include <stdio.h>
//Create a menu driven program to input five subject marks and show result.
int english();
int hindi();
int maths();
int science();
int computer();
void show_marks();

int main(void)
{
    int choice, eng, hin, math, sci, comp;
    printf("\nPress 1 to Input English Marks in Database.\n");
    printf("Press 2 to Input Hindi Marks in Database.\n");
    printf("Press 3 to Input Maths Marks in Database.\n");
    printf("Press 4 to Input Science Marks in Database.\n");
    printf("Press 5 to Input Computer Marks in Database.\n");
    printf("Press 6 to View Marks from Database.\n");
    printf("Press 0 to Exit.\n");
    while (1)
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            eng = english();
        }
        if (choice == 2)
        {
            hin = hindi();
        }
        if (choice == 3)
        {
            math = maths();
        }
        if (choice == 4)
        {
            sci = science();
        }
        if (choice == 5)
        {
            comp = computer();
        }
        if (choice == 0)
        {
            printf("\nExiting the Program...\n\n");
            return 0;
        }
        else
        {
            ("Invalid Input\n");
        }
        if (choice == 6)
        {
            break;
        }
    };

    printf("Marks Inputed:\n");
    printf("English = %d\n", eng);
    printf("Hindi = %d\n", hin);
    printf("Maths = %d\n", math);
    printf("Science = %d\n", sci);
    printf("Computer = %d\n", comp);

    return 0;
}

int english()
{
    int marks = 0;
    printf("Input Marks: ");
    scanf("%d", &marks);
    return marks;
}
int hindi()
{
    int marks = 0;
    printf("Input Marks: ");
    scanf("%d", &marks);
    return marks;
}
int maths()
{
    int marks = 0;
    printf("Input Marks: ");
    scanf("%d", &marks);
    return marks;
}
int science()
{
    int marks = 0;
    printf("Input Marks: ");
    scanf("%d", &marks);
    return marks;
}
int computer()
{
    int marks = 0;
    printf("Input Marks: ");
    scanf("%d", &marks);
    return marks;
}