// 整数型の変数aとbを宣言して、それぞれのアドレスを確認しよう

#include <stdio.h>
int main(void){
    int a, b;
    int* pa, pb;
    
    pa = &a;
    pb = &b;
    
    printf("%x\n", pa);
    printf("%x\n", pb);
    
    // 以下でもOK
    // printf("%x\n", &a);
    // printf("%x\n", &b);
    
    return 0;
}
