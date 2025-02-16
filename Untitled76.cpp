#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = sizeof(arr1) / sizeof(arr1[0]);

    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Copied array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

