#include <stdio.h>

void sortRows(int arr[3][3], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

int main() {
    int arr[3][3] = {{3, 1, 2}, {6, 4, 5}, {9, 7, 8}};
    int m = 3, n = 3;
    
    sortRows(arr, m, n);

    printf("Sorted 2D array across rows:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

