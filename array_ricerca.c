#include <stdio.h>

int main() {
    int lista[] = {4, 8, 15, 16, 23, 42};
    int cercato = 15;
    int trovato = 0;
    for (int i = 0; i < 6; i++) {
        if (lista[i] == cercato) {
            trovato = 1;
            break;
        }
    }
    if (trovato) printf("elemento trovato!\n");
    else printf("non trovato :(\n");
    return 0;
}
