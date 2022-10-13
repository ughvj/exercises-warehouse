#include <stdio.h>

int main(void) {
    int i, j;
    FILE *f;
    f = fopen("test2.txt", "w");

    for (i=1; i<=9; i++) {
        for (j=1; j<=9; j++) {
            fprintf(f, "%3d", i*j);
        }
        fprintf(f, "\n");
    }

    fclose(f);
}
