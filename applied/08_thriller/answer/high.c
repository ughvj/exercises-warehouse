// 2つの0~99までのランダムな整数の和を計算しよう
// 上記の手順を10,000回繰り返して、100を超えた和の割合を百分率で小数第一位まで出力してください

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int a, b, i, count;
    srand((unsigned int)time(NULL));
    
    for (i=0, count=0; i<10000; i++) {
        a = rand() % 100;
        b = rand() % 100;
        if (a+b >= 100) count++;
    }

    printf("%.1f\n", (float)count/10000*100);
    
    return 0;
}
