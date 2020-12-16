#include <stdio.h>
//C Program to demonstrate STACK.
int stack[100];
int top = -1;
void push(int);
void pop();

int main()
{
	int choice, roll_no;
	//Menu Driven Loop
	do
	{
		printf("\nPress 1 to create.\n");
		printf("Press 2 to show.\n");
		printf("Press 0 to close.\n");
		printf("\nEnter Your Choice: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("\nEnter Roll No in STACK: ");
			scanf("%d", &roll_no);
			push(roll_no);
		}
		else if (choice == 2)
		{
			pop();
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
//Creating Stack
void push(int roll_no)
{
	if (top == 99)
	{
		printf("\nWarning! Stack is Overflow.\n");
	}
	else
	{
		top++;
		stack[top] = roll_no;
	}
}
//Printing stack
void pop()
{
	if (top == -1)
	{
		printf("\nWarning! Stack is Underflow.\n");
	}
	else
	{
		printf("%d\n", stack[top]);
		top--;
	}
}