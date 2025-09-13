#include <stdio.h>

int main(void) {
    double s = 0;
    double a = 0.5;
    for (int i = 1; i<=10; i++) {
        s += a;
        a *= 0.5;
        printf("第%d次：s = %lf\n", i, s);
    }
}