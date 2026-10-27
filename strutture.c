#include <stdio.h>

typedef struct {
    char nome[30];
    int matricola;
    float media;
} Studente;

void stampa_dati(Studente s) {
    printf("[SCHEDA] Nome: %s | ID: %d | Media: %.1f\n", s.nome, s.matricola, s.media);
}

int main() {
    Studente s1 = {"Paolo", 12345, 7.8};
    stampa_dati(s1);
    return 0;
}
