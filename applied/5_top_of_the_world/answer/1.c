// 1つの数字を入力し、その数字が0以下になるまで5を引いていき、最後に5を引いた回数を出力するプログラムを作成しよう

#include <stdio.h>
int main(void){
    int input, count;
    scanf("%d", &input);
    
    for (count = 0; input > 0; count++) {
        input -= 5;
    }
    
    printf("%d\n", count);
}
