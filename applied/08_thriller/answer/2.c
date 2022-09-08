// 2個の整数を入力し、それらの和を出力しよう
// ただし、和が100を超える場合には代わりに "NG" と出力してください

#include <stdio.h>
int main(void){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a+b >= 100) {
        printf("NG\n");
    } else {
        printf("%d\n", a+b);
    }
    
    return 0;
}
