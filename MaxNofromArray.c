#include <stdio.h>
#define MAX_SIZE 100

int main() {
  int arr[MAX_SIZE];
  int i, n, max;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  for (i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("The maximum number in the array is: %d\n", max);

  return 0;
}
