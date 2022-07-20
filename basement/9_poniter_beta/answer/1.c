#include <stdio.h>
int main(void){
    int a = 50;
    int* p = &a;
    
    printf("アドレス: %x\n", p);
    printf("値: %d\n", *p);

    return 0;
}
