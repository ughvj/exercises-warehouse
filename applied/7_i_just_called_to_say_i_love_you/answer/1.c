// 5個の整数を入力し、それらの平均を出力しよう
// 平均は小数第一位まで表示してください

#include <stdio.h>
int main(void){
    int input, i;
    float sum;
    
    for (i=0, avg=0; i<5; i++) {
        scanf("%d", &input);
        sum += input;
    }
    
    printf("%.1f\n", sum/5);
}
