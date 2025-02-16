#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int position;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Enter position: ");
    scanf("%d", &position);
    
    for(int i = strlen(str1); i >= position; i--) {
        str1[i + strlen(str2)] = str1[i];
    }
    
    for(int i = 0; i < strlen(str2); i++) {
        str1[position + i] = str2[i];
    }
    
    printf("Resultant string: %s\n", str1);
    return 0;
}

