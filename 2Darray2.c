// 2D array problem 2

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of upper triangular matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of upper triangular matrix: %d\n", sum);

    return 0;
}
