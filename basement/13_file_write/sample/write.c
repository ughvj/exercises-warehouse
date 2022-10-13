#include <stdio.h>

int main(void) {
    FILE *f;
    f = fopen("test.txt", "w");
    fprintf(f, "Hello world!\n");
    fclose(f);
}
