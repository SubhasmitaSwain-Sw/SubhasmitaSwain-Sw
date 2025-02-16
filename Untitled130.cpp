#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

