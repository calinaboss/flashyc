#include <stdio.h>

int main() {
    int voti[5] = {6, 7, 8, 5, 9};
    for (int i = 0; i < 5; i++) {
        printf("voto %d: %d\n", i + 1, voti[i]);
    }
    return 0;
}
