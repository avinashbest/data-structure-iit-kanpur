#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *str;
  str = (char *)malloc(10);
  strcpy(str, "Hello");
  printf("String is %s\n", str);
  free(str);
  return 0;
}
