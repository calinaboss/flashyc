#include <stdio.h>

int trova_massimo(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int trova_minimo(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    printf("max=%d min=%d\n", trova_massimo(10, 5, 20), trova_minimo(10, 5, 20));
    return 0;
}
