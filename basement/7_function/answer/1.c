#include <stdio.h>
int juubai(int n) {
    return n * 10;
}

int main(void){
    int input;
    scanf("%d", &input);
    printf("%d\n", juubai(input));
}
