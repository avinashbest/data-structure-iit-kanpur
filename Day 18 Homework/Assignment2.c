// Create a linked list which takes subject marks from user using dynamic memory allocation and factorials of each numbers inputed by users.
#include <stdio.h>
#include <stdlib.h>

void create();
void factorial();

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
    factorial();
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

void factorial()
{

    int factorial_english = 1;
    int factorial_hindi = 1;
    int factorial_maths = 1;
    int factorial_science = 1;
    int factorial_computer = 1;

    for (temp = start; temp != NULL; temp = temp->next)
    {
        //Calculating factorial for each student
        for (int i = 1; i <= temp->english; i++)
        {
            factorial_english *= i;
        }
        for (int i = 1; i <= temp->hindi; i++)
        {
            factorial_hindi *= i;
        }
        for (int i = 1; i <= temp->maths; i++)
        {
            factorial_maths *= i;
        }
        for (int i = 1; i <= temp->science; i++)
        {
            factorial_science *= i;
        }
        for (int i = 1; i <= temp->computer; i++)
        {
            factorial_computer *= i;
        }

        printf("\nFactorial of English Marks = %d\n", factorial_english);
        printf("Factorial of Hindi Marks = %d\n", factorial_hindi);
        printf("Factorial of Maths Marks = %d\n", factorial_maths);
        printf("Factorial of Science Marks = %d\n", factorial_science);
        printf("Factorial of Computer Marks = %d\n", factorial_computer);
    }
    printf("\n\n");
}
