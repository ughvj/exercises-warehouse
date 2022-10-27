#include <stdio.h>

int main(void) {
    int i, n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (i=1; i<=n; i++) {
        if (i % m == 0) {
            printf("%d\n", i);
        }
    }
}
