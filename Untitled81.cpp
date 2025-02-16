#include <stdio.h>

int determinant(int matrix[2][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    printf("Determinant: %d\n", determinant(matrix));
    return 0;
}

