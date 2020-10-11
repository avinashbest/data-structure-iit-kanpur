// Create linked list and delete first element and last element.
#include <stdio.h>
#include <stdlib.h>

void insert();
void show();
void delete_first();
void delete_last();
void delete_intermediate();
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
		printf("\nPress 5 to delete element from intermediate postion");
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
		else if (choice == 5)
		{
			delete_intermediate();
		}
		else if (choice == 0)
		{
			break;
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
	struct student *s;
	if (start != NULL)
	{
		temp = start;
		for (; temp->next != NULL; temp = temp->next)
		{
			s = temp;
			s->next = NULL;
			free(temp);
			printf("\nElement Removed Successfully!");
		}
	}
	else
	{
		printf("No Element!");
	}
}

void delete_intermediate()
{
	int position;
	struct student *p;
	printf("Enter Position that you want to delete: ");
	scanf("%d", &position);
	position--;
	temp = start;
	for (int count = 1; count < position; count++)
	{
		temp = temp->next;
	}
	p = temp;
	temp = temp->next;
	p->next = temp->next;
	free(temp);
	printf("Element Removed Successfully!");
}