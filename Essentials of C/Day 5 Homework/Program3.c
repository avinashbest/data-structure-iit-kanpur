/*Write a program to search an element in an array using Linear Search.*/
#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 56, 98};
  int n;

  printf("Enter the number to for matching: ");
  scanf("%d", &n);

  for (int i = 0; i < 5; i++) {
    if (arr[i] == n) {
      printf("Matched number is %d", n);
      return 0;
    }
  }
  printf("No result found!");
}
