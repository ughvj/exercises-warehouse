// じゃんけんに勝利したら+100ポイント、敗北したら-50ポイントとして、nポイントを超えるまでじゃんけんを行うプログラムを作成しよう
// nポイントを超えた時点で、おこなったじゃんけんの回数を出力します

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    int current, target, count;
    scanf("%d", &target);

    for (current = count = 0; current <= target; count++) {
        // 0 as winning
        if (rand() % 2 == 0) {
            current += 100;
        } else {
            current -= 50;
        }
    }
    
    // while文を使用した例
    // current = count = 0;
    // while(current <= target) {
    //     // 0 as winning
    //     if (rand() % 2 == 0) {
    //         current += 100;
    //     } else {
    //         current -= 50;
    //     }
    //     count++;
    // }
    
    printf("%d", count);
}
