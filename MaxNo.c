#include <stdio.h>

int main() {
    int numbers[10];  // Array to store the 10 integers
    int maxNumber;    // Variable to store the maximum number

    printf("Please enter 10 integers:\n");

    // Input loop to get 10 integers from the user
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is the maximum
    maxNumber = numbers[0];

    // Loop to find the maximum number
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Print the maximum number
    printf("The maximum number among the entered integers is: %d\n", maxNumber);

    return 0;
}
