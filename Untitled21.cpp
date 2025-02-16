#include <stdio.h>

int main()
{
	int i;
	printf("Alphabets from (a-z) are:\n");

	for (i = 97; i <= 122; i++) {
		
		printf("%c ", i);
	}

	printf("\nAlphabets from (A-Z) are:\n");

	for (i = 65; i <= 90; i++) {
	
		printf("%c ", i);
	}

	return 0;
}

