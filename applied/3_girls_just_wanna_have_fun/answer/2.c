// 2つの数字を入力して、それらの商を出力しよう
// 1つ目の入力が割られる数、2つ目の入力が割る数とします
// ただし、割る数に0が入力された場合、"ゼロ除算です" と出力します

#include <stdio.h>
int main(void){
    int dividee, divider;
    scanf("%d", &dividee);
    scanf("%d", &divider);
    
    if (divider == 0) {
        printf("ゼロ除算です\n");
    } else {
        printf("%d\n", dividee/divider);
    }
}
