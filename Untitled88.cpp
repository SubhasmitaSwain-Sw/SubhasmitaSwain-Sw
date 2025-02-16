#include <stdio.h>

void swapFirstLast(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {

        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][cols - 1];
        matrix[i][cols - 1] = temp;
    }
}

void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix, 3, 3);

    swapFirstLast(matrix, 3, 3);

    printf("\nMatrix After Interchanging First and Last Elements in Each Row:\n");
    printMatrix(matrix, 3, 3);

    return 0;
}

