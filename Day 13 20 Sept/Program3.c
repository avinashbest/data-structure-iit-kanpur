#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                  //realloc()
int main(void)
{
  char *str;
  str = (char *)malloc(10);
  strcpy(str, "Hello");
  printf("String is %s\nAddress is %p\n", str, str);
  str = (char *)realloc(str, 20);
  printf("String is %s\nNew address is %p\n", str, str);
  return 0;
}
