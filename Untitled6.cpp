#include <stdio.h> 

float multiply(float a, float b) 
{ 
return a * b; 
} 

int main() 
{ 
	float A = 2.11, B = 7.88, product; 

	product = multiply(A, B); 
 
	printf("Product of entered numbers is:%.3f", product); 

	return 0; 
}

