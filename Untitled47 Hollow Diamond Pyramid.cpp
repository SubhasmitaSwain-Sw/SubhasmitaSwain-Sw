#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++) {
      
        int l;
        if (i < n) l = 2 * (n - i) - 1;
        else l = 2 * (i - n + 1) + 1;

        for (int j = 0; j < l; j++)
            printf(" ");

        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

