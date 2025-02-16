#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++) {

        int l;
        if (i < n) l = 2 * i + 1;
        else  l = 2 * (2 * n - i) - 3;

        for (int j = 0; j < l; j++)
            printf(" ");

        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1 || i == 0
                || i == 2 * n - 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

