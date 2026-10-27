#include <stdio.h>

int trova_massimo(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    printf("massimo: %d\n", trova_massimo(12, 45, 23));
    return 0;
}
