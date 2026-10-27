#include <stdio.h>

int main() {
    int lista[] = {4, 8, 15, 16, 23, 42};
    int cercato = 15;
    int pos = -1;
    for (int i = 0; i < 6; i++) {
        if (lista[i] == cercato) {
            pos = i;
            break;
        }
    }
    if (pos != -1) printf("trovato alla posizione indice %d\n", pos);
    else printf("non presente nella lista\n");
    return 0;
}
