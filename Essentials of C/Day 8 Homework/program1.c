#include <stdio.h>
//WAP to evaluate the average of five numbers using array.
int main()
{
	int arr[] = {21, 15, 26, 54, 84};
	int sum = 0;
	float average;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	average = sum / 5.0;
	printf("Average = %f", average);
	return 0;
}
