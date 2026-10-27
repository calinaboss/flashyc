#include <stdio.h>
#include <string.h>

int main() {
    char parola[50] = "programmare in c";
    printf("la frase '%s' ha %lu caratteri\n", parola, strlen(parola));
    return 0;
}
