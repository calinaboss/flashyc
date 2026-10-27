#include <stdio.h>

float c_to_f(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float temp = 25.0;
    printf("%.1f gradi celsius sono %.1f fahrenheit\n", temp, c_to_f(temp));
    return 0;
}
