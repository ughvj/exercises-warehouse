// 1つの数字を入力して、その数字が40以下なら "不合格"、41以上なら"合格"と出力しよう

#include <stdio.h>
int main(void){
    int input;
    scanf("%d", &input);
    
    if (input <= 40) {
        printf("不合格\n");
    } else {
        printf("合格\n");
    }
}
