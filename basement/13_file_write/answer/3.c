#include <stdio.h>

int main(void) {
    FILE *f;
    f = fopen("test1.txt", "a");
    fprintf(f, "Hello world\n");
    fprintf(f, "Hello world\n");
    fclose(f);
}
