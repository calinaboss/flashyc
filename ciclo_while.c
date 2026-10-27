#include <stdio.h>

int main() {
    int contatore = 5;
    while (contatore > 0) {
        printf("mancano %d...\n", contatore);
        contatore--;
    }
    printf("via!\n");
    return 0;
}
