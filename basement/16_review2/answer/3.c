#include <stdio.h>

int main(void) {
    char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    int counts[26] = {0};
    char input[256];
    FILE *f;
    int i, j;

    f = fopen("input.txt", "r");
    fscanf(f, "%s", input);
    fclose(f);

    for (i=0; input[i] != '\0'; i++) {
        for (j=0; j<26; j++) {
            if (alphabets[j] == input[i]) {
                counts[j]++;
            }
        }
    }
    for (i=0; i<26; i++) {
        printf("%c: %d\n", alphabets[i], counts[i]);
    }
}
