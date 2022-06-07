// 1から順番に数字を足していき、nを超えたら計算をやめて、その時点の数字を出力するプログラムを作成しよう

#include <stdio.h>
int main(void){
    int i, acc, limit;
    scanf("%d", &limit);
    
    acc = 0;
    i = 1;
    while (acc <= limit) acc += i++;
    // 以下と同義
    // while (acc <= limit) {
    //     acc += i;
    //     i++;
    // }
    printf("%d\n", acc);
}
