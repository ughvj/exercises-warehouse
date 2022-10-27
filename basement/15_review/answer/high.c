#include <stdio.h>

int main(void) {
    int cnt, i, n, m, k;
    FILE *f1, *f2;
    f1 = fopen("input_high.txt", "r");
    fscanf(f1, "%d", &n);
    fscanf(f1, "%d", &m);
    fscanf(f1, "%d", &k);
    fclose(f1);

    f2 = fopen("high.txt", "w");
    for (cnt=0, i=1; i<=n; i++) {
        if (i % m == 0) {
            fprintf(f2, "%d ", i);
            cnt++;
            if (cnt % k == 0) {
                fprintf(f2, "\n");
            }
        }
    }
    fclose(f2);
}
