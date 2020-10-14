/*Write a program that simply takes elements of the array from the user and finds the sum of these elements.*/
#include <stdio.h>

int main() {
  const int SIZE = 5;
  int marks[SIZE];

  int sum = 0;

  for (int i = 0; i < SIZE; i++) {
    printf("Enter the marks of student %d: ", i+1);
    scanf("%d", &marks[i]);
  }

  printf("\n");

  for (int i = 0; i < SIZE; i++) {
    sum += marks[i];
  }

  printf("Sum = %d\n\n", sum);

  return 0;
}
