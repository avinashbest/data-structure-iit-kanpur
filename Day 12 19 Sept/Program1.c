#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr;
	//printf("Size of int %d", sizeof(a));
	//malloc(sizeof(int)); Accurate size determined by the compiler.
	ptr = (int*)malloc(sizeof(int));
	printf("Enter Roll No: ");
	scanf("%d", ptr);
	printf("\nRoll No: %d", *ptr);
}
