#include <stdio.h>
#include <stdlib.h>

void push();
void display();
void pop();

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
        choice = menu();
        if (choice == 1)
        {
            push();
        }
        else if (choice == 2)
        {
            display();
        }
        else if (choice == 3)
        {
            pop();
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid Input.\n");
        }

    } while (choice != 0);

    return 0;
}

int menu()
{
    int choice;
    printf("\n==========================================");
    printf("\nPress 1 to Push Element.");
    printf("\nPress 2 to Display Element.");
    printf("\nPress 3 to Pop Element.");
    printf("\nPress 0 to Exit.");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    printf("==========================================");
    return choice;
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
    struct stack *p;
    p = top;
    if (top == NULL)
    {
        printf("\nSTACK is Underflow!\n");
    }
    else
    {
        printf("\nSTACK Elements Are: ");
        for (; p != NULL; p = p->next)
        {
            printf("\n%d", p->rollNo);
        }
    }
}

void pop()
{
    struct stack *p;
    p = top;
    if (top == NULL)
    {
        printf("\nSTACK is already empty!\n");
    }
    else
    {
        top = top->next;
        free(p);
        printf("\nElement is removed Successfully!\n");
    }
}