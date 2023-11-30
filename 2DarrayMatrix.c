#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to calculate the sum of elements in a row
int sumOfRow(int matrix[ROWS][COLS], int row)
{
	int sum = 0;
	for (int j = 0; j < COLS; j++)
	{
		sum += matrix[row][j];
	}
	return sum;
}

// Function to calculate the sum of elements in a column
int sumOfColumn(int matrix[ROWS][COLS], int col)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += matrix[i][col];
	}
	return sum;
}

// Function to calculate the sum of elements in the left diagonal
int sumOfLeftDiagonal(int matrix[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += matrix[i][i];
	}
	return sum;
}

// Function to calculate the sum of elements in the right diagonal
int sumOfRightDiagonal(int matrix[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += matrix[i][COLS - i - 1];
	}
	return sum;
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[ROWS][COLS], int result[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			result[j][i] = matrix[i][j];
		}
	}
}

// Function to calculate the sum of all elements in the matrix
int sumOfAllElements(int matrix[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

int main()
{
	int matrix[ROWS][COLS];

	// Input matrix elements
	printf("Enter the elements of the matrix (%dx%d):\n", ROWS, COLS);
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Enter element at position (%d, %d): ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}

	// Display matrix
	printf("\nEntered Matrix:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	// Calculate and display the sum of rows
	printf("\nSum of Rows:\n");
	for (int i = 0; i < ROWS; i++)
	{
		printf("Row %d: %d\n", i + 1, sumOfRow(matrix, i));
	}

	// Calculate and display the sum of columns
	printf("\nSum of Columns:\n");
	for (int j = 0; j < COLS; j++)
	{
		printf("Column %d: %d\n", j + 1, sumOfColumn(matrix, j));
	}

	// Calculate and display the sum of the left diagonal
	printf("\nSum of Left Diagonal: %d\n", sumOfLeftDiagonal(matrix));

	// Calculate and display the sum of the right diagonal
	printf("Sum of Right Diagonal: %d\n", sumOfRightDiagonal(matrix));

	// Calculate and display the transpose of the matrix
	int transposeMatrixResult[COLS][ROWS];
	transposeMatrix(matrix, transposeMatrixResult);
	printf("\nTranspose of Matrix:\n");
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			printf("%d\t", transposeMatrixResult[i][j]);
		}
		printf("\n");
	}

	// Calculate and display the sum of all elements
	printf("\nSum of All Elements: %d\n", sumOfAllElements(matrix));

	return 0;
}
// 2d array for finla