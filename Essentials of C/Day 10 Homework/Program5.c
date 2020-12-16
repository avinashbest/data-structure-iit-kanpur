#include <stdio.h>

void main(){
	int ar[1000];
	int n, i, position, value;
	
	printf("How many elements you want to store? ");//Size of the array
	scanf("%d", &n);
	
	//Taking Input 
	printf("\nEnter %d number:\n",n);
	for(i = 0; i<n ;i++){
		scanf("%d", &ar[i]);
	}
	//Printing Input Elements
	printf("\nInputed elements is: \n");
	for(i = 0; i<n ; i++){
		printf("%d\n", ar[i]);
	}
	
	//Taking position where change will be made
	printf("\nEnter position that you want to change: ");
	scanf("%d", &position);
	
	//Taking value to be changed
	printf("Enter Value you want to change: ");
	scanf("%d", &value);
	
	//Printing the Modified Array
	ar[position - 1] = value;
	printf("\nAfter Modification Elements Are:\n");
	for(i = 0; i<n ; i++){
		printf("\n%d", ar[i]);
	}
	
}
