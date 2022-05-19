#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int chosen, i;
    int guarantee = 0;

    srand((unsigned int)time(NULL));

    for(i=0; i<10; i++) {
        chosen = rand() % 100;
        if (i == 9 && guarantee == 0) {
            printf("SR\n");
        } else if (chosen < 2) {
            printf("SSR\n");
            guarantee = 1;
        } else if (chosen < 8) {
            printf("SR\n");
            guarantee = 1;
        } else if (chosen < 45) {
            printf("R\n");
        } else {
            printf("N\n");
        }
    }
}
