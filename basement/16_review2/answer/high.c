#include <stdio.h>

int main(void) {
    char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    int counts[26] = {0};
    char input[256];
    FILE *f1, *f2;
    int i, j;

    f1 = fopen("input.txt", "r");
    fscanf(f1, "%s", input);
    fclose(f1);

    for (i=0; input[i] != '\0'; i++) {
        for (j=0; j<26; j++) {
            if (alphabets[j] == input[i]) {
                counts[j]++;
            }
        }
    }

    f2 = fopen("high.txt", "w");
    for (i=0; i<26; i++) {
        fprintf(f2, "%c: %d\n", alphabets[i], counts[i]);
    }
    fclose(f2);
}
