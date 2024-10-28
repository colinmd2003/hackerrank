#include <stdio.h>

int main(void) {
    char s[100];
    scanf("%[^\n]%*c", &s); // user input
    printf("Hello, World!\n");
    printf("%s\n", s); // print user input

    return 0;
}

