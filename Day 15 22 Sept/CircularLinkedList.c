#include <stdio.h>
#include <stdlib.h>
//Circular Linked List
void create();
void show();

struct student
{
    int rollNo;
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
    do
    {
        node = (struct student *)malloc(sizeof(struct student));
        printf("\nEnter the Roll No: ");
        scanf("%d", &node->rollNo);
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
    node->next = start;
}

void show()
{
    int n = 1;
    temp = start;
    printf("\nPress 1 For Next Element.");
    printf("\nPress 0 To Close.");
    do
    {
        printf("\nEnter Your Choice: ");
        scanf("%d", &n);
        printf("Roll No: %d\n", temp->rollNo);
        if (n == 1)
        {
            temp = temp->next;
        }
        else if (n == 0)
        {
            break;
        }

    } while (n != 0);

    printf("\n\n");
}
