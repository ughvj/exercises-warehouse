#include <stdio.h>
int main(void){
    int input;
    scanf("%d", &input);
    
    if (input < 1) {
        printf("範囲外です\n");
    } else if (input <= 10) {
        printf("1以上10以下です\n");
    } else if (input <= 50) {
        printf("11以上50以下です\n");
    } else if (input <= 100) {
        printf("51以上100以下です\n");
    } else {
        printf("範囲外です\n");
    }

    return 0;
}
