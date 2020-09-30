#include <stdio.h>
#include <stdlib.h>

void push();
void display();

struct stack
{
    int rollNo;
    struct stack *next;
};
struct stack *top = NULL, *temp;

int main(void)
{
    int choice;
    do
    {
        printf("\nPress 1 to add element.");
        printf("\nPress 2 to show element.");
        printf("\nPress 0 to exit.");
        printf("\nEnter Your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            push();
        }
        else if (choice == 2)
        {
            display();
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid Input.")
        }

    } while (choice != 0);

    return 0;
}

void push()
{
    struct stack *ptr_to_stack;
    ptr_to_stack = (struct stack *)malloc(sizeof(struct stack));
    printf("\nEnter your Roll No: ");
    scanf("%d", &ptr_to_stack->rollNo);
    ptr_to_stack->next = top;
    top = ptr_to_stack;
}

void display()
{
    for (; top != NULL; top = top->next)
    {
        printf("\n%d", top->rollNo);
    }
}