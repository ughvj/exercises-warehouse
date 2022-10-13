#include <stdio.h>

int main(void) {
    int i, n;
    char filename[10][256] = {
        "1.txt",
        "2.txt",
        "3.txt",
        "4.txt",
        "5.txt",
        "6.txt",
        "7.txt",
        "8.txt",
        "9.txt"
    };
    FILE *f;

    scanf("%d", &n);
    if (1 > n || n > 9) {
        printf("1-9までの数字を入力してください\n");
        return 0;
    }

    for (i=0; i<n; i++) {
        f = fopen(filename[i], "w");
        fprintf(f, "%d\n", i);
        fclose(f);
    }    
}
