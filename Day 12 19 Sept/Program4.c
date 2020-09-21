#include<stdio.h>
#include<stdlib.h>
//Program to sum n number of input during run-time.
					//malloc()
int main()
{
	int no, sum = 0, i;
	printf("Input No Of Values To Input: ");
	scanf("%d",&no);
	for(i=1 ; i <= no ; i++)
	{
		int *ptr;
		ptr=(int *)malloc(sizeof(int));
		printf("Input Value :");
		scanf("%d",ptr);
		sum += *ptr;
	}
	printf("Sum Of Given Values Are: %d", sum);
	return 0;
}
