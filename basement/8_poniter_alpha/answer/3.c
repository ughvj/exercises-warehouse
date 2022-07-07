// 文字型で、大きさが10の配列を宣言して、それぞれのアドレスを確認しよう

#include <stdio.h>
int main(void){
    int i;
    char a[10];
    char* p;
    
    for(i=0; i<10; i++) {
        p = &a[i];
        printf("%x\n", p);
        // 以下でもOK
        // printf("%x\n", &a[i]);
    }
    
    return 0;
}

