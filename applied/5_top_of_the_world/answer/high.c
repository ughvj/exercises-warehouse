// 数字を入力し、その数字を素因数分解して出力しよう
// ただし、入力される数字の最小値は2、最大値は100とします 範囲外の数字が入力された場合は "範囲外です" と出力します

#include <stdio.h>
int main(void){
    int input, i;
    scanf("%d", &input);
    i=2;
    
    if (2 <= input && input <= 100) {
        while (i < input) {
            if (input % i == 0) {
                printf("%d*", i);
                input /= i;
                i = 2;
            } else {
                i++;
            }
        }
        printf("%d", input);
    } else {
        printf("範囲外です\n");
    }
}
