#include <stdio.h>

int main(void) {
    int ch;
    printf("Text in the file:\n");
    printf("————————————————————————————————\n");
    while ((ch = getchar()) != EOF) putchar(ch);
    printf("\n");
    printf("————————————————————————————————\n");
    return 0;
}