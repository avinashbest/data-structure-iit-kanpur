#include <stdio.h>
#include <stdlib.h>
//Create a linked list of floating point values and display it.
void create();
void show();

struct student
{
    float data;
    struct student *next;
};

struct student *start = NULL, *node, *temp;

int main(void)
{
    create();
    show();
    return 0;
}

void create()
{
    char choice;
    printf("\n");
    do
    {
        node = (struct student *)malloc(sizeof(struct student));
        printf("Enter floating Point Number: ");
        scanf("%f", &node->data);
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

void show()
{
    printf("\nFloating Point Number Are:\n");
    for (temp = start; temp != NULL; temp = temp->next)
    {
        printf("%.3f\n", temp->data);
    }
    printf("\n\n");
}