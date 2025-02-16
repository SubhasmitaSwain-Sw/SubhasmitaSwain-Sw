#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
        if(str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A']++;
    }
    
    for(i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            printf("The string is not a pangram\n");
            return 0;
        }
    }
    
    printf("The string is a pangram\n");
    return 0;
}

