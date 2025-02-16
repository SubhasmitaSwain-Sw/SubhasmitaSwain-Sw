#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int index;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter index: ");
    scanf("%d", &index);
    
    printf("Unicode code point: %d\n", str[index]);
    return 0;
}

