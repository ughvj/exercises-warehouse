#include <stdio.h>

int main(void) {
    int i, j;
    char input[256], reversed[256];
    FILE *f1, *f2;
    f1 = fopen("input.txt", "r");
    fscanf(f1, "%s", input);
    fclose(f1);

    for (i=0; input[i] != '\0'; i++) ;
    for (j=0, i--; i >= 0; j++, i--) {
        printf("%d, %d\n", i, j);
        printf("%c, %c\n", input[i], reversed[j]);
        reversed[j] = input[i];
    }

    f2 = fopen("high.txt", "w");
    fprintf(f2, "%s\n", reversed);
    fclose(f2);
}
