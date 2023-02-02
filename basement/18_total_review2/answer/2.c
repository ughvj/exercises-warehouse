#include <stdio.h>

void count_numbers(void) {
    int i, input, n[10];
    for (i=0; i<10; i++) {
        n[i] = 0;
    }
    for (i=0; i<5; i++) {
        scanf("%d", &input);
        n[input]++;
    }
    for (i=0; i<10; i++) {
        printf("%d: %d\n", i, n[i]);
    }
}

int main(void){
    count_numbers();
}
