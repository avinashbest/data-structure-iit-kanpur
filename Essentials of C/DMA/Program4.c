#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                  //realloc()
int main(void)
{
  int ar[] = {11, 22, 33, 44, 55};
  int i, *ptr;
  ptr = ar; //ptr = &ar[0];
  for (int i = 0; i < 5; i++) {
    printf("%u = %d\t <=> \t%d = %d\n", ptr, *ptr, (ar+i), *(ar+i));
  }
  return 0;
}
