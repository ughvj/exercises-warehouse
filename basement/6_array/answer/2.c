// 14, 55, 39, 72, 41という5つの数字を配列に入れて、それら全てを順番に画面に出力しよう

#include <stdio.h>
int main(void){
    int i, n[5] = {14, 55, 39, 72, 41};
    for (i=0; i<5; i++) {
        printf("%d\n", n[i]);
    }
}
