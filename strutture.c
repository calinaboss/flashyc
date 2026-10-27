#include <stdio.h>

typedef struct {
    char nome[30];
    int matricola;
    float media;
} Studente;

int main() {
    Studente s1 = {"Paolo", 12345, 7.8};
    printf("nome: %s - matricola: %d\n", s1.nome, s1.matricola);
    return 0;
}
