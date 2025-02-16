#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    
    printf("First letters of each word: ");
    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0 || str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    return 0;
}

