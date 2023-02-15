#include <stdio.h>

int main(void) {
    int a, b;

    FILE *input, *output;
    input = fopen("input2.txt", "r");
    output = fopen("output2.txt", "w");

    fscanf(input, "%d", &a);
    fscanf(input, "%d", &b);

    fprintf(output, "%d\n", a+b);
    fprintf(output, "%d\n", a-b);
    fprintf(output, "%d\n", a*b);
    fprintf(output, "%d\n", a/b);

    fclose(input);
    fclose(output);
}
