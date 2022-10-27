#include <stdio.h>

int main(void) {
    int i, n, m;
    FILE *f1, *f2;
    f1 = fopen("input_3.txt", "r");
    fscanf(f1, "%d", &n);
    fscanf(f1, "%d", &m);
    fclose(f1);

    f2 = fopen("3.txt", "w");
    for (i=1; i<=n; i++) {
        if (i % m == 0) {
            fprintf(f2, "%d\n", i);
        }
    }
    fclose(f2);
}
