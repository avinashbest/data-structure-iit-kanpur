#include <stdio.h>
//Create a stack using array, take a element from user and search element is found in stack or not.
int stack[100]; //STACK Array of size 100 element.
int top = -1;

void push(int);
void pop();
void search(int);

int main()
{
    int choice, roll_no;
    //Menu Driven Loop
    do
    {
        printf("\nPress 1 to create.\n");
        printf("Press 2 to show.\n");
        printf("Press 3 to search element.\n");
        printf("Press 0 to close.\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter Roll No in STACK: ");
            scanf("%d", &roll_no);
            push(roll_no);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            printf("\nEnter Roll No to be search in STACK: ");
            scanf("%d", &roll_no);
            search(roll_no);
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    } while (choice != 0);
    return 0;
}
//Creating Stack
void push(int roll_no)
{
    if (top == 99)
    {
        printf("\nWarning! Stack is Overflow.\n");
    }
    else
    {
        top++;
        stack[top] = roll_no;
    }
}
//Printing stack
void pop()
{
    if (top == -1)
    {
        printf("\nWarning! Stack is Underflow.\n");
    }
    else
    {
        printf("%d\n", stack[top]);
        top--;
    }
}
//Searching
void search(int roll_no)
{
    int flag;
    if (top == -1)
    {
        printf("\nStack is Underflow!\n");
    }
    else
    {
        top--;
        for (; top >= 0; top--)
        {
            if (stack[top] == roll_no)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("Match Found.");
        }
        else
        {
            printf("No Match Found.");
        }
    }
}