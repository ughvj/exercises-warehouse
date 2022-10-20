#include <stdio.h>

int main(void) {
    int i;
    char input[256];
    FILE *f1, *f2;
    f1 = fopen("input.txt", "r");
    fscanf(f1, "%s", input);
    fclose(f1);

    for (i=0; input[i] != '\0'; i++) ;

    f2 = fopen("3.txt", "w");
    fprintf(f2, "%d\n", i);
    fclose(f2);
}
