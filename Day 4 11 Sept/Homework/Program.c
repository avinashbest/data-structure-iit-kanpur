#include <stdio.h>
int sum(int , int );

void main() {
  int a, b;
  printf("Enter two number\n");
  scanf("%d%d",&a,&b);
  int result = sum(a,b);
  printf("Sum = %d",result);
}

int sum(int x, int y){
  int add;
  add = x + y;
  return add;
}
