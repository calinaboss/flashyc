#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "ciao! questo e un test di scrittura da c\n");
        fclose(fp);
        printf("file salvato!\n");
    }
    return 0;
}
