#include <stdio.h>

// find max value of four ints
int max_of_four(int a, int b, int c, int d) {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        if (d > max) max = d;

        return max;
}

int main(void) {
    int a, b, c, d;

    // user inputs integers
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // print max value
    printf("%d\n", max_of_four(a, b, c, d));
}

