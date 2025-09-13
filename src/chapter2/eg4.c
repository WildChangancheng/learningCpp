#include <stdio.h>

int main(void) {
    char c1, c2, c3;
    printf("\nType in character1:");
    scanf("%c", &c1);
    printf("\nType in character2:");
    scanf("%c ", &c2);
    printf("\nType in character3:");
    scanf(" %c", &c3);

    printf("c1:%c\n", c1);
    printf("c2:%c\n", c2);
    printf("c3:%c\n", c3);
    return 0;
}