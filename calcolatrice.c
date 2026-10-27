#include <stdio.h>

float dividi(float x, float y) {
    if (y == 0) {
        printf("errore: divisione per zero!\n");
        return 0;
    }
    return x / y;
}

int main() {
    printf("test divisione: %.2f\n", dividi(8.0, 0));
    return 0;
}
