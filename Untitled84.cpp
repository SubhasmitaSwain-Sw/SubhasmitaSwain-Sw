#include <stdio.h>

int main() {
    int m1[2][2] = {{1, 2}, {3, 4}};
    int m2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

