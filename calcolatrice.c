#include <stdio.h>

int moltiplica(int x, int y) { return x * y; }
float dividi(float x, float y) { return x / y; }

int main() {
    printf("moltiplicazione: %d\n", moltiplica(4, 5));
    printf("divisione: %.2f\n", dividi(10.0, 2.0));
    return 0;
}
