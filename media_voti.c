#include <stdio.h>

int main() {
    int voti[4] = {7, 8, 6, 9};
    int somma = 0;
    for (int i = 0; i < 4; i++) {
        somma += voti[i];
    }
    float media = (float)somma / 4;
    printf("media finale: %.2f\n", media);
    if (media >= 6.0) printf("promosso!\n");
    else printf("bocciato :(\n");
    return 0;
}
