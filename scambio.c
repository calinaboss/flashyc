#include <stdio.h>

void scambia(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    printf("prima: a=%d b=%d\n", a, b);
    scambia(&a, &b);
    printf("dopo: a=%d b=%d\n", a, b);
    return 0;
}
