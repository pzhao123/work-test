#include <stdio.h>

int sum0(int a, int b) {
    return a + b;
}

unsigned short sum1(unsigned short a, unsigned short b) {
    return a + b;
}

int main() {

    short n = 32778;
    printf("out of bounds short (32778): %hi\n", n);

    int a = 2;
    int b = 3;
    int sum = sum0(a, b);
    printf("2 + 3 = %d\n", sum);

    unsigned short c = -1;
    printf("negative unsigned short (-1): %hu\n", c);

    unsigned short p = 50000;
    unsigned short q = 20000;
    printf("out of bounds unsigned short (70000): %hu\n", sum1(p, q));

    return 0;
}

