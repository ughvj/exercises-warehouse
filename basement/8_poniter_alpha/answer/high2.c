// 整数型の変数aのアドレスをポインタpに格納した後、ポインタpのアドレスを格納するためのポインタ変数ppを宣言し、ppへpのアドレスを代入した後、以下の5つを確認しよう
// 変数aのアドレス
// ポインタpに格納されているアドレス
// ポインタp自身のアドレス
// ポインタppに格納されているアドレス
// ポインタpp自身のアドレス

#include <stdio.h>
int main(void){
    int a;
    int* p;
    int** pp;
    
    p = &a;
    pp = &p;
    
    printf("%x\n", &a);
    printf("%x\n", p);
    printf("%x\n", &p);
    printf("%x\n", pp);
    printf("%x\n", &pp);
    
    return 0;
}
