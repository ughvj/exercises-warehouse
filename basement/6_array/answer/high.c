// フィボナッチ数列の第20項までを求めよう

#include <stdio.h>
int main(void){
    int i, fib[20];
    fib[0] = fib[1] = 1;
    
    for (i=2; i<20; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (i=0; i<20; i++) {
        printf("%d\n", fib[i]);
    }
}
