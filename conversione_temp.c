#include <stdio.h>

float c_to_f(float c) { return (c * 9.0 / 5.0) + 32; }
float f_to_c(float f) { return (f - 32) * 5.0 / 9.0; }

int main() {
    printf("25C in F: %.1f\n", c_to_f(25.0));
    printf("77F in C: %.1f\n", f_to_c(77.0));
    return 0;
}
