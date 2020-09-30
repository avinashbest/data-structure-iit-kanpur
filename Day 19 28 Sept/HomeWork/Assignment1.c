// Create linked list and delete first element and last element.
#include <stdio.h>
#include <stdlib.h>
//Singly Linked List
void insert();
void show();
void delete_first();
void delete_last();
//Structure of the Node
struct student
{
	int rollNo;
	struct student *next;
};

struct student *start = NULL, *node, *temp;

int main(void)
{
	int choice;
	do
	{
		printf("\nPress 1 to create list.");
		printf("\nPress 2 to display elements.");
		printf("\nPress 3 to delete the first element");
		printf("\nPress 4 to delete the last element");
		printf("\nPress 0 to close.");
		printf("\nEnter Your Choice: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			insert();
		}
		else if (choice == 2)
		{
			show();
		}
		else if (choice == 3)
		{
			delete_first();
		}
		else if (choice == 4)
		{
			delete_last();
		}
		else
		{
			printf("Invalid Choice.\n");
		}
	} while (choice != 0);

	return 0;
}
//Taking one by one input from user.
void insert()
{
	node = (struct student *)malloc(sizeof(struct student));
	printf("Enter the Roll No: ");
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
		temp = temp->next;
	}
}
//Printing Linked list function.
void show()
{
	struct student *t;
	t = start;
	for (; t != NULL; t = t->next)
	{
		printf("%d\t", t->rollNo);
	}
}

void delete_first()
{
	temp = start;
	start = start->next;
	free(temp);
	printf("\nElement is deleted Succesfully!\n");
}

void delete_last()
{
	struct student *lastnode, *second_last;
	if (node == NULL)
	{
		printf("There is no element in the list.\n");
	}
	else
	{
		lastnode = start;
		second_last = start;
		//Traverse to the last node of the List
		while (lastnode->next != NULL)
		{
			second_last = lastnode;
			lastnode = lastnode->next;
		}
		if (lastnode == node)
		{
			//Delete the last node;
			free(lastnode);
			//Disconnect the link of second last node with last node
			second_last->next = NULL;
			return;
		}
	}
}
