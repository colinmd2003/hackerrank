#include <stdio.h>

int main(void) {
    // user inputted char
    char ch;
    scanf("%c", &ch); 

    // user inputted string
    char s[100];
    scanf("%s", &s);

    // user inputted line
    char sen[100];
    scanf(" %[^\n]%*c", &sen);

    // print char, string, and sentence
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}

