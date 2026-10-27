#include <stdio.h>

int main() {
    int val = 42;
    int *p = &val;
    printf("valore di val: %d\n", val);
    printf("indirizzo in memoria: %p\n", p);
    printf("valore puntato da p: %d\n", *p);
    return 0;
}
