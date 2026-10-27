#include <stdio.h>

void saluta_utente(char nome[]) {
    printf("ciao %s!\n", nome);
}

int main() {
    saluta_utente("Marco");
    saluta_utente("Luca");
    saluta_utente("Sara");
    return 0;
}
