#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *str;
	str = (char *)calloc(str, 10);
	strcpy(str, "Hello");
	printf("String is %s\nAddress is %p\n", str, str);
	return 0;
}
