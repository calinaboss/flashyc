#include <stdio.h>

int main() {
    int scelta = 3;
    switch (scelta) {
        case 1:
            printf("avvio gioco...\n");
            break;
        case 2:
            printf("mostra impostazioni...\n");
            break;
        case 3:
            printf("uscita dal programma. ciao!\n");
            break;
        default:
            printf("opzione non riconosciuta\n");
    }
    return 0;
}
