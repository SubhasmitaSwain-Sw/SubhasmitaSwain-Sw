#include <stdio.h>
int main()
{
	int i, s = 10;
	int n = 80;
	i = 1;

	while (i <= n) {
	
		s += i;
		i++;
	}
	
	printf("Sum = %d", s);
	return 0;
}

