#include <stdio.h>
#include <string.h>

int main() {
    char pass_giusta[] = "segreto123";
    char pass_inserita[] = "segreto123";
    if (strcmp(pass_giusta, pass_inserita) == 0) {
        printf("accesso consentito!\n");
    } else {
        printf("password errata\n");
    }
    return 0;
}
