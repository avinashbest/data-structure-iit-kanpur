#include <stdio.h>
#include <stdlib.h>
//Create a linked list that values should taken from user and then take a search element. find whether the element is in list or not.
void create();
void show();
void search();

struct student
{
    int rollNo;
    struct student *next;
};

struct student *start = NULL, *node, *temp;

int main(void)
{
    create();
    // show();
    search();
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
}

// void show()
// {
//     printf("\nInput Detail:\n");
//     for (temp = start; temp != NULL; temp = temp->next)
//     {
//         printf("Roll No: %d\n", temp->rollNo);
//     }
//     printf("\n\n");
// }

void search()
{
    int n, flag;
    printf("Enter the Roll No You Want to Search: ");
    scanf("%d", &n);
    for (temp = start; temp != NULL; temp = temp->next)
    {
        if (temp->rollNo == n)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag = 1)
    {
        printf("Congrats! Match Found.");
    }
    else
    {
        printf("Sorry! No Match Found.");
    }
}