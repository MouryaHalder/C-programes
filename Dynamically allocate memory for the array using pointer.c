#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array using pointer
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
