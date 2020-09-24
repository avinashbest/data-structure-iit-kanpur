#include <stdio.h>

void main()
{
	int ar[1000];
	int n, i, f, value;

	printf("How many elements you want to store? "); //Size of the array
	scanf("%d", &n);

	//Taking Input
	printf("\nEnter %d number:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}
	//Taking value to be changed
	printf("Which value you want to change: ");
	scanf("%d", &value);

	for (i = 0; i < n; i++)
	{
		if (ar[i] == value)
		{
			f = 1;
			break;
		}
		else
		{
			f = 0;
		}
	}
	if (f == 1)
	{
		ar[i] = ar[i + 1];
		//Printing the Modified Array
		printf("\nAfter Modification Elements Are:\n");
		for (i = 0; i < n - 1; i++)
		{
			printf("\n%d", ar[i]);
		}
	}
	else
	{
		printf("No Matched Found!");
	}
}
