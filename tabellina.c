#include <stdio.h>

int main() {
    int n = 7;
    printf("--- Tabellina del %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
