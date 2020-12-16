#include <stdio.h>
// => Remove A Element From Array, using following
// 		By Value
// 		By Index
// 		By Position
void main()
{
	int ar[1000];
	int n, i, index;

	printf("How many elements you want to store? "); //Size of the array
	scanf("%d", &n);

	//Taking Input
	printf("\nEnter %d number:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	printf("Enter index no. which value you want remove: ");
	scanf("%d", &index);

	for (i = index; i < n; i++)
	{
		ar[i] = ar[i + 1];
	}

	printf("After removing array elements are:\n");
	for (i = 0; i < n - 1; i++)
	{
		printf("%d\n", ar[i]);
	}
}
