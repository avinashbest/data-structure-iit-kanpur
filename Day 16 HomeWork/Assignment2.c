#include <stdio.h>
#include <stdlib.h>
//Create a single linked list and also take a number from user to search element from the list. if found then display "Element is found at the position: ___" otherwise display "Element is not found".
void create();
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

void search()
{
    int n, flag;
    static int count = 0;
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
        count++;
    }
    if (flag = 1)
    {
        printf("Congrats! Match Found at %d Position", (count-1));
    }
    else
    {
        printf("Sorry! No Match Found.");
    }
}
