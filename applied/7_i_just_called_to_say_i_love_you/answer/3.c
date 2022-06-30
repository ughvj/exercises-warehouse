// 9個の昇順に並んだ整数を入力し、それらの合計と平均と中央値を出力しよう
// 平均は小数第一位まで表示してください

#include <stdio.h>
int main(void){
    int input, sum, values[9], i;
    
    for (i=0, sum=0; i<9; i++) {
        scanf("%d", &input);
        values[i] = input;
        sum += input;
    }
    
    // sum
    printf("合計=%d\n", sum);

    // average
    printf("平均=%.1f\n", (float)sum/9);
    
    // median
    printf("中央値=%d\n", values[4]);
}
