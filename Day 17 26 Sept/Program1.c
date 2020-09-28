#include <stdio.h>

int stack[5];
int top = -1;
void create();
void show();

int main()
{
	int choice, stack_size;
	do
	{
		printf("\nPress 1 to create.\n");
		printf("Press 2 to show.\n");
		printf("Press 0 to close.\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			create();
		}
		else if (choice == 2)
		{
			show();
		}
		else if (choice == 0)
		{
			break;
		}
		else
		{
			printf("Invalid Choice!\n");
		}
	} while (choice != 0);
	return 0;
}

void create()
{
	if (top == 5)
	{
		printf("\nStack is Overflow!\n");
	}
	else
	{
		top++;
		for (; top < 5; top++)
		{
			printf("Enter Roll No: ");
			scanf("%d", &stack[top]);
		}
	}
}

void show()
{
	if (top == -1)
	{
		printf("\nStack is Underflow!\n");
	}
	else
	{
		top--;
		for (; top >= 0; top--)
		{
			printf("%d\n", stack[top]);
		}
	}
}