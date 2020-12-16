/*Write a program to find the minimum and maximum element of the array.*/
#include <stdio.h>

int main() {
  int arr[] = {10, 35, 25, 5, 38};
  int max = arr[0], min = arr[0];

  for (int i = 0; i < 5; i++) {
    if (arr[i] < arr[i+1]) {
      max = arr[i+1];
    }else if (arr[i] > arr[i+1]) {̥
      max = arr[i];
    }
  }
  printf("Maximum = %d", max);
  return 0;
}
