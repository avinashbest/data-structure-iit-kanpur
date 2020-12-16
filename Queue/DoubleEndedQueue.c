#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int no;
    struct queue *next;
    struct queue *prev;
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

    return 0;
}

void enqueue()
{
    queue *node;
    node = (queue *)malloc(sizeof(queue));
    printf("\nEnter Number: ");
    scanf("%d", &node->no);
    node->next = NULL;
    node->prev = NULL;
    if (front == NULL)
    {
        front = node;
        rear = node;
    }
    else
    {
        rear->next = node;
        node->prev = rear;//Double Ended Queue
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
    	int n;
        temp = front;
        while (temp != NULL)
    	{
	        printf("\nRoll No = %d\n", temp->no);
	        printf("\nPress 2 for Next Element.");
	        printf("\nPress 1 for Previous Element.");
	        printf("\nEnter Your Choice: ");
	        scanf("%d", &n);
	        if (n == 1)
	        {
	            temp = temp->prev;
	        }
	        else if (n == 2)
	        {
	            temp = temp->next;
	        }
	        else
	        {
	            printf("Invalid Input\n");
	        }
	        if (temp == NULL)
	        {
	            printf("\nYou Have Reached To First/Last Element\n");
	            printf("Exiting The Program...\n");
	            return;
	        }
    	}
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

