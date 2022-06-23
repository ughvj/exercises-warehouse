// 大きさが5の配列を用意し、0から4までの数字を配列に格納してください
// その配列の順番を逆転して出力しよう

#include <stdio.h>
int main(void){
    int i;
    int array[5] = {0, 1, 2, 3, 4};
    for (i=4; i>=0; i--) {
        printf("%d\n", array[i]);
    }
}
