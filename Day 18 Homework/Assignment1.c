// Create a linked list which takes subject marks from user using dynamic memory allocation and add all numbers inputed by users.
#include <stdio.h>
#include <stdlib.h>

void create();
void add();

struct student
{
    int english;
    int hindi;
    int maths;
    int science;
    int computer;
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
        //Taking Subject marks
        printf("Enter the Marks of Hindi: ");
        scanf("%d", &node->hindi);
        printf("Enter the Marks of English: ");
        scanf("%d", &node->english);
        printf("Enter the Marks of Maths: ");
        scanf("%d", &node->maths);
        printf("Enter the Marks of Science: ");
        scanf("%d", &node->science);
        printf("Enter the Marks of Computer: ");
        scanf("%d", &node->computer);
        //Linked list Algorithm
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
        printf("Do You Want To Add More Student [Y/N]: ");
        fflush(stdin); //Use before scanf() => clear garbage value
        scanf("%c", &choice);
    } while (choice == 'Y' || choice == 'y');
}

void add()
{
    int sum = 0;
    printf("\nMarks Inputed:\n");
    for (temp = start; temp != NULL; temp = temp->next)
    {
        sum = temp->computer + temp->english + temp->hindi + temp->maths + temp->science;
    }
    printf("Total Marks = %d\n", sum);
    printf("\n\n");
}
