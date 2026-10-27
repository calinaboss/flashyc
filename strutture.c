#include <stdio.h>

struct Studente {
    char nome[30];
    int matricola;
    float media;
};

int main() {
    struct Studente s1 = {"Paolo", 12345, 7.8};
    printf("studente: %s matricola: %d media: %.1f\n", s1.nome, s1.matricola, s1.media);
    return 0;
}
