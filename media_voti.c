#include <stdio.h>

int main() {
    int voti[4] = {7, 8, 6, 9};
    int somma = 0;
    for (int i = 0; i < 4; i++) {
        somma += voti[i];
    }
    float media = (float)somma / 4;
    printf("media: %.2f\n", media);
    return 0;
}
