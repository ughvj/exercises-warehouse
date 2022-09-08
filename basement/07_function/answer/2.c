#include <stdio.h>
void seiseki(int n) {
    if (n >= 60) {
        printf("合格\n");
    } else {
        printf("不合格\n");
    }
}

int main(void){
    int input;
    scanf("%d", &input);
    seiseki(input);
}
