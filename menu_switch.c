#include <stdio.h>

int main() {
    int scelta = 2;
    switch (scelta) {
        case 1:
            printf("hai scelto opzione 1\n");
            break;
        case 2:
            printf("hai scelto opzione 2\n");
            break;
        default:
            printf("scelta non valida\n");
    }
    return 0;
}
