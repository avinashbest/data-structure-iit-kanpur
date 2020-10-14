#include<stdio.h>

void main(){
	int a = 300; //00000000 00000000 00000001 00101100
	char *ptr;
	ptr = &a;
	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
}
