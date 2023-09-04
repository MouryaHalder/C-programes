#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 42;
    int* singlePtr = &num; // Single pointer to an integer

    printf("Value of num: %d\n", num);
    printf("Value of num using single pointer: %d\n", *singlePtr);
    printf("Address of num: %p\n", &num);
    printf("Address stored in single pointer: %p\n", singlePtr);

    // Dynamic memory allocation using double pointer
    int** doublePtr = (int**)malloc(sizeof(int*));
    *doublePtr = &num;

    printf("\nValue of num using double pointer: %d\n", **doublePtr);
    printf("Address of num using double pointer: %p\n", *doublePtr);
    printf("Address of double pointer: %p\n", &doublePtr);

    // Clean up memory allocated using double pointer
    free(doublePtr);

    return 0;
}
