#include <stdio.h>

int main() {
    int m1[4][4] = {{ 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }};
    int m2[4][4] = {{ 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 3, 2, 4 }, 
                    { 1, 2, 3, 4 }};
    int equal = 1;
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(m1[i][j] != m2[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    if(equal) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }
    return 0;
}

