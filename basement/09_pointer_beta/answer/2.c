#include <stdio.h>
int main(void){
    char a = 'A';
    char* p = &a;
    
    printf("アドレス: %x\n", p);
    printf("値: %c\n", *p);

    return 0;
}
