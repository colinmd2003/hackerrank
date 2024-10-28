#include <stdio.h>

int main(void) {
    // input two integers
    int a, b;
    scanf("%d %d", &a, &b);

    // input two floats
    float c, d;
    scanf("%f %f", &c, &d);

    // sum of numbers 
    int intSum = a + b;
    float floatSum = c + d;

    // difference of numbers 
    int intDiff = a - b;
    float floatDiff = c - d;

    // print sums and differences
    printf("%d %d\n", intSum, intDiff);
    printf("%.1f %.1f\n", floatSum, floatDiff);
}

