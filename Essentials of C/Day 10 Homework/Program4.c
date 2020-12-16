#include <stdio.h>
//Take an array, where size should be inputed from user. and perform following:
// => Modify Array Element, using following
// 		By Value
// 		By Index
// 		By Position
void main(){
	int ar[1000];
	int n, i, index, value;
	
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
	
	//Taking index where change will be made
	printf("\nEnter Index number that you want to change: ");
	scanf("%d", &index);
	
	//Taking value to be changed
	printf("Enter Value you want to change: ");
	scanf("%d", &value);
	
	//Printing the Modified Array
	ar[index] = value;
	printf("\nAfter Modification Elements Are:\n");
	for(i = 0; i<n ; i++){
		printf("\n%d", ar[i]);
	}
	
}
