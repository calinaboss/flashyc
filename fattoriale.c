#include <stdio.h>

long long fattoriale(int n) {
    if (n <= 1) return 1;
    return n * fattoriale(n - 1);
}

int main() {
    int num = 6;
    printf("fattoriale di %d = %lld\n", num, fattoriale(num));
    return 0;
}
