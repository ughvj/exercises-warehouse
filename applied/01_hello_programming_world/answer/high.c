#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    switch(rand() % 3) {
        case 0:
            printf("Hello\n");
            break;
        case 1:
            printf("World\n");
            break;
        case 2:
            printf("Again\n");
            break;
    }
}
