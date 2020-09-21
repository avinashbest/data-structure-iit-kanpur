#include <stdio.h>

void main()
{
	int ar[1000];
	int n, i, position;

	printf("How many elements you want to store? "); //Size of the array
	scanf("%d", &n);

	//Taking Input
	printf("\nEnter %d number:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	printf("\nEnter position no. which value you want remove: ");
	scanf("%d", &position);

	for (i = position - 1; i < n; i++)
	{
		ar[i] = ar[i + 1];
	}

	printf("\nAfter removing array elements are:\n");
	for (i = 0; i < n - 1; i++)
	{
		printf("%d\n", ar[i]);
	}
}
