#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        for (int j = i; j<=9; j++) {
            printf("%d * %d = %02d\t", i, j, i*j);
        }
        printf("\n");
    }
}