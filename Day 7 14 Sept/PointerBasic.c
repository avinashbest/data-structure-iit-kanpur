#include <stdio.h>

void main(){
  int a = 99;
  int *pt;
  pt = &a;
  printf("a = %d\n",a);
  printf("&a = %u\n",&a);
  printf("pt = %u\n",pt);
  printf("&pt = %u\n",&pt);
  printf("*pt = %d\n",*pt);
  printf("%d",*(&a));
}
