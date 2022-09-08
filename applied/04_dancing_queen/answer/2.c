// 1から順番に数字を足していき、nを超えたら計算をやめて、その時点の数字を出力するプログラムを作成しよう

#include <stdio.h>
int main(void){
    int i, acc, limit;
    scanf("%d", &limit);

    for (acc = 0, i = 1; acc <= limit; acc += i++) ;

    // while文を使用した例
    // acc = 0;
    // i = 1;
    // while (acc <= limit) acc += i++;

    printf("%d\n", acc);
}
