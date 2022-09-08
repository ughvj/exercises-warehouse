// 1つの数字を入力して、その数字を1ずつ引いて0まで出力しよう

#include <stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    
    for (i=n; i>=0; i--) {
        printf("%d\n", i);
    }
}
