#include <stdio.h>

void rotate(int matrix[3][3], int m, int n) {
    int temp = matrix[0][0];
    for(int i = 0; i < m - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            matrix[i][j] = matrix[i + 1][j + 1];
        }
    }
    matrix[m - 1][n - 1] = temp;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    rotate(matrix, 3, 3);
    
    printf("Rotated matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

