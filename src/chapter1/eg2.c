// chapter2 eg2.c
#include <stdio.h>

float bmi_caculator(float height, float weight) {
    return weight / height / height;
}
int main(void) {
    float result = bmi_caculator(1.7, 65);
    printf("%f\n", result);
    return 0;
}