#include <stdio.h>
#include <string.h>

int main() {
    char bin1[100], bin2[100], result[101];
    int i, carry = 0, sum;
    printf("Enter first binary string: ");
    scanf("%s", bin1);
    printf("Enter second binary string: ");
    scanf("%s", bin2);
    
    int len1 = strlen(bin1), len2 = strlen(bin2);
    int max_len = len1 > len2 ? len1 : len2;
    
    for(i = 0; i < max_len || carry; i++) {
        sum = carry;
        if (i < len1) sum += bin1[len1 - 1 - i] - '0';
        if (i < len2) sum += bin2[len2 - 1 - i] - '0';
        result[i] = sum % 2 + '0';
        carry = sum / 2;
    }
    result[i] = '\0';
    strrev(result);
    printf("Sum: %s\n", result);
    return 0;
}

