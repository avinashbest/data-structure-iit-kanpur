#include <stdio.h>
#include <stdlib.h>
//WAP that take 10 values using DMA and display add.

int main(void)
{
	int no = 10, sum = 0;
	printf("Enter 10 Numbers to get addition:\n");
	for (int i = 1; i <= no; i++)
	{
		int *ptr;
		ptr = (int *)malloc(sizeof(int));
		printf("Input Number %d: ", i);
		scanf("%d", ptr);
		sum += *ptr;
	}
	printf("Sum Of Given Values Are: %d", sum);
	return 0;
}
