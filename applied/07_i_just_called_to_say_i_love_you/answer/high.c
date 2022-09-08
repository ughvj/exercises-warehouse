// 9個の整数を入力し、それらの分散と標準偏差を出力しよう
// それぞれ小数第一位まで表示してください

#include <stdio.h>
#include <math.h>
int main(void){
    int input, i;
    float sum, values[9], variance;
    float avg = 0;
    
    for (i=0, sum=0; i<9; i++) {
        scanf("%d", &input);
        values[i] = input;
        sum += input;
    }
    avg = sum/9;
    
    for(i=0, sum=0; i<9; i++) {
        sum += (values[i] - avg) * (values[i] - avg);
    }
    variance = sum/9;
    
    // variance
    printf("分散=%.1f\n", variance);

    // standard deviation
    printf("標準偏差=%.1f\n", sqrt(variance));
}
