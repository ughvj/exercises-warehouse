// 整数型で、大きさが5の配列を宣言して、それぞれのアドレスを確認しよう

#include <stdio.h>
int main(void){
    int i;
    int a[5];
    int* p;
    
    for(i=0; i<10; i++) {
        p = &a[i];
        printf("%x\n", p);
        // 以下でもOK
        // printf("%x\n", &a[i]);
    }
    
    return 0;
}
