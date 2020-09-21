
// WAP to genrerate the table of number entered by user.
#include <stdio.h>

void table(){
  int i = 1;
  int num;
  printf("Enter any Number:");
  scanf("%d", &num);
  printf("Multiplication table of %d:\n", num);
  while (i <= 10) {
      printf("%d x %d = %d\n", num, i, num * i);
      i++;
  }
}

void main() {
  table();
}
