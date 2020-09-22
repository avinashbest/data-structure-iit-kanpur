#include <stdio.h>
#include <stdlib.h>
//Create a linked list which take integer numbers from user according to user choice(DMA). calculate the add and print it.
void create();
void add();

struct student
{
    int data;
    struct student *next;
};

struct student *start = NULL, *node, *temp;

int main(void)
{
    create();
    add();
    return 0;
}

void create()
{
    char choice;
    printf("\n");
    do
    {
        node = (struct student *)malloc(sizeof(struct student));
        printf("Enter Integer: ");
        scanf("%d", &node->data);
        node->next = NULL;
        if (start == NULL)
        {
            temp = node;
            start = node;
        }
        else
        {
            temp->next = node;
            temp = temp->next; // or temp = node; => So, that node and temp point the same location.
        }
        printf("Do You Want To Continue Y or N: ");
        fflush(stdin); //Use before scanf() => clear garbage value
        scanf("%c", &choice);
    } while (choice == 'Y' || choice == 'y');
}

void add()
{
    int sum = 0;
    printf("\nInput Detail:\n");
    for (temp = start; temp != NULL; temp = temp->next)
    {
        sum = sum + temp->data;
    }
    printf("Addition = %d\n", sum);
    printf("\n\n");
}