#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        sum += matrix[i][i] + matrix[i][2 - i];
    }

    printf("Sum of diagonals: %d\n", sum);
    return 0;
}

