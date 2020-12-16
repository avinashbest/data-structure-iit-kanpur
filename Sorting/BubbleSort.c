#include <stdio.h>

int main()
{
	int arr[100];
	int temp, arr_size;
	printf("How many elements you want to Store? ");
	scanf("%d", &arr_size);
	printf("Enter %d Elements:\n", arr_size);
	//Taking Input from user => Array Element
	for (int i = 0; i < arr_size; i++)
	{
		scanf("%d", &arr[i]);
	}
	//Priting the Array
	printf("\n====================================================================");
	printf("\nArray Element Before Sorting:\n");
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n====================================================================");
	//Bubble Sort Algorithm
	for (int i = 0; i < arr_size; i++)
	{
		for (int j = 0; j < arr_size; j++)
		{
			//Two Element Swapping Algorithm
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		//Debugging
		printf("\nAfter %d Iteration Array Element are:\n", i + 1);
		for (int k = 0; k < arr_size; k++)
		{
			printf("%d\t", arr[k]);
		}
	}
	//Priting the Array After Sorting
	printf("\n====================================================================");
	printf("\nArray Element After Sorting:\n");
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n====================================================================");
	return 0;
}
