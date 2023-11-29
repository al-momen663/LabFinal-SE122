#include <stdio.h>
// function for multiply matrics
void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0; // intilalling result = 0
            for (int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
// funtion for subtracting matrics
void subtractMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}
// function for printing matrics
void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][3] = {{1, 3, 5}, {-4, 8, 2}, {7, 2, -1}};
    int B[3][3] = {{4, 3, 3}, {-4, -8, 2}, {7, 1, -1}};
    int result_multiply[3][3];
    int result_subtract[3][3];

    multiplyMatrices(A, B, result_multiply);
    subtractMatrices(A, B, result_subtract);

    printf("Matrix A:\n");
    printMatrix(A);
	printf("-----------------------------\n");

    printf("Matrix B:\n");
    printMatrix(B);
	printf("-----------------------------\n");


    printf("Matrix A * B(multiplication):\n");
    printMatrix(result_multiply);
	printf("-----------------------------\n");


    printf("Matrix A - B(subtraction):\n");
    printMatrix(result_subtract);
	printf("-----------------------------\n");


    return 0;
}
