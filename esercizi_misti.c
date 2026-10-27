#include <stdio.h>

int main() {
    printf("--- Prove Varie ---\n");
    int punteggio = 75;
    char esito = (punteggio >= 60) ? 'P' : 'B';
    printf("esito esame: %c\n", esito);
    return 0;
}
