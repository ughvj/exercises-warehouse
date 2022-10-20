#include <stdio.h>

int main(void) {
    char input[256];
    FILE *f;
    f = fopen("input.txt", "r");
    fscanf(f, "%s", input);
    fclose(f);

    printf("%s!!!\n", input);
}
