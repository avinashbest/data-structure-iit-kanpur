#include<stdio.h>
#include<stdlib.h>
									//calloc()
void main(){
	int n, i;
	int *ptr;
	printf("Enter a block size: ");
	scanf("%d", &n);
	ptr = (int *)calloc(n, sizeof(int));

	for(i=0;i<n;i++){
		scanf("%d", ptr+i);
	}

	for(i=0;i<n;i++){
		printf("%u\t -> \t%d\n", ptr+i, *(ptr+i));
	}
	free(ptr);
}
