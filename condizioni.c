#include <stdio.h>

int main() {
    int eta = -1;
    if (eta < 0) {
        printf("eta non valida\n");
    } else if (eta >= 18) {
        printf("sei maggiorenne\n");
    } else {
        printf("sei minorenne\n");
    }
    return 0;
}
