// n個の整数を入力し、それらの平均を出力しよう
// -1が入力されたら入力を終了します
// 平均は小数第一位まで表示してください

#include <stdio.h>
int main(void){
    int input, count;
    float sum;
    
    for (count=0, scanf("%d", &input); input != -1; count++, scanf("%d", &input)) {
        sum += input;
    }
    
    printf("%.1f\n", sum/count);
}
