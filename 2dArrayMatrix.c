#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS], const char* name) {
    printf("Enter elements for %s matrix:\n", name);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS], const char* name) {
    printf("\n%s matrix:\n", name);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int resultSum[ROWS][COLS];
    int resultSubtract[ROWS][COLS];

    inputMatrix(matrix1, "First");
    inputMatrix(matrix2, "Second");

    sumMatrix(matrix1, matrix2, resultSum);
    subtractMatrix(matrix1, matrix2, resultSubtract);

    printMatrix(matrix1, "First");
    printMatrix(matrix2, "Second");
    printMatrix(resultSum, "Resultant (Sum)");
    printMatrix(resultSubtract, "Resultant (Subtraction)");

    return 0;
}