// 0から9までの、5つの数字を入力して、それぞれが出現した回数を出力しよう

#include <stdio.h>
int main(void){
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
