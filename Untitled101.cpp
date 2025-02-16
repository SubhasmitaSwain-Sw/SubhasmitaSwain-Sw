#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int i = 0;
    while(str[i] == '0') i++;
    
    if(str[i] == '\0')
        printf("No non-zero digit\n");
    else
        printf("String after removing leading zeros: %s\n", &str[i]);
    
    return 0;
}

