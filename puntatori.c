#include <stdio.h>

int main() {
    int val = 42;
    int *p = &val;
    *p = 99;
    printf("nuovo valore di val modificato da puntatore: %d\n", val);
    return 0;
}
