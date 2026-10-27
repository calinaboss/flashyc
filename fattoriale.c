#include <stdio.h>

int main() {
    int n = 5;
    long long fatt = 1;
    for (int i = 1; i <= n; i++) {
        fatt *= i;
    }
    printf("il fattoriale di %d e: %lld\n", n, fatt);
    return 0;
}
