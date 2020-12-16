#include<stdio.h>
#include<stdlib.h>

void main(){
	int choice;
	int *ptr;
	while(1){
	ptr = (int*)malloc(sizeof(int));
	printf("Enter Roll No: ");
	scanf("%d", ptr);
	printf("\nAddress: %u\tRoll No: %d", ptr, *ptr);
	printf("Press 0 to close & 1 to continue.");
	scanf("%d", &choice);
	if(choice == 0)
		break;
	}
}
