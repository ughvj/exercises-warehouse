// n個の数字を入力し、それらを合計して出力しよう
// 0が入力されたら入力を終了します

#include <stdio.h>
int main(void){
    int input, acc;
    scanf("%d", &input);

    for (acc = 0; input != 0; scanf("%d", &input)) {
        acc += input;
    }
    
    printf("%d\n", acc);
}
