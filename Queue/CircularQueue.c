#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int no;
    struct queue *next;
};
typedef struct queue queue;
queue *front = NULL, *rear = NULL;

void enqueue();
void dequeue();
void traverse();

int main(void)
{
    int choice;
    do
    {
        printf("\nPress 0 to Close.");
        printf("\nPress 1 to Add Element.");
        printf("\nPress 2 to Traverse.");
        printf("\nPress 3 to Remove Element.");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            enqueue();
        }
        else if (choice == 2)
        {
            traverse();
        }
        else if (choice == 0)
        {
            break;
        }
        else if (choice == 3)
        {
            dequeue();
        }
        else
        {
            printf("Invalid Input!");
        }
    } while (choice != 0);

    rear->next = front; // Circular Queue => Linking last node to the first node

    return 0;
}

void enqueue()
{
    queue *node;
    node = (queue *)malloc(sizeof(queue));
    printf("\nEnter Number: ");
    scanf("%d", &node->no);
    node->next = NULL;
    if (front == NULL)
    {
        front = node;
        rear = node;
    }
    else
    {
        rear->next = node;
        rear = node;
    }
}

void traverse()
{
    queue *temp;
    if (rear == NULL)
    {
        printf("\nNo Element is in Queue");
    }
    else
    {
        for (temp = front; temp != NULL; temp = temp->next)
        {
            printf("%d\t", temp->no);
        }
        printf("\n");
    }
}

void dequeue()
{
    queue *temp;
    if (front == NULL)
    {
        printf("\nNo Element in Queue.");
    }
    else
    {
        temp = front;

        front = front->next;
        free(temp);
        printf("\nElement Remove Successfully!\n");

        if (front == rear)
        {
            front = NULL;
            rear = NULL;
        }
    }
}
