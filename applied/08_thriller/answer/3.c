// 2個の整数を入力し、それらの和を出力しよう
// ただし、和が100を超える場合には代わりに "NG" と出力して、再度入力を求めてください

#include <stdio.h>
int main(void){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    
    for (; a+b >= 100; scanf("%d", &a), scanf("%d", &b)) {
        printf("NG\n");
    }

    // while文を使ったパターン
    // while (a+b >= 100) {
    //     printf("NG\n");
    //     scanf("%d", &a);
    //     scanf("%d", &b);
    // }

    printf("%d\n", a+b);
    
    return 0;
}
