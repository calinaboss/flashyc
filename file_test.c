#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("impossibile aprire il file in scrittura\n");
        return 1;
    }
    fprintf(fp, "ciao! questo e un test di scrittura da c\n");
    fclose(fp);
    printf("file creato e chiuso correttamente\n");
    return 0;
}
