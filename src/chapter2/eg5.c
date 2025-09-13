#include <stdio.h>

int main(void) {
    char first_name[40];
    char last_name[40];
    printf("Type your name please, in the way first name, last name:");
    scanf("%s , %s", first_name, last_name);
    printf("\nGotta. Hello, %s %s!Hope you enjoy this simaster!\n", first_name, last_name);
    return 0;
}