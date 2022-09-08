// 入力された数字について、2で割れなくなるまで2で割り続け、割った回数を出力しよう
// ただし、入力される数字はn個です
// -1が入力されたら入力受付を終了します

#include <stdio.h>
int main(void){
    int input, count;
    scanf("%d", &input);

    while (input != -1) {
        count = 0;
        while(input % 2 == 0) {
            input /= 2;
            count++;
        }
        printf("%d\n", count);
        scanf("%d", &input);
    }
}

// for文を利用した場合の書き方例
//
// #include <stdio.h>
// int main(void){
//     int input, count;
//
//     for (scanf("%d", &input); input != -1; scanf("%d", &input)) {
//         for(count = 0; input % 2 == 0; count++) {
//             input /= 2;
//         }
//         printf("%d\n", count);
//     }
// }
