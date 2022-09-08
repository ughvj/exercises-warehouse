// フィボナッチ数列のn番目を求めるプログラムを作成しよう

#include <stdio.h>
int main(void){
    int a, b, t, i, input;
    scanf("%d", &input);

    a = 1;
    b = 0;
    
    for (i=0; i<input; i++) {
        t = a;
        a = b;
        b = t + b;
    }
    
    printf("%d\n", b);
}

// 再帰による別解
#include <stdio.h>
int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}

int main(void){
    int input;
    scanf("%d", &input);
    printf("%d\n", fib(input));
}

// 三項演算子を用いた場合のfib()
// int fib(int n) {
//     return n == 0 || n == 1 ? n : fib(n - 2) + fib(n - 1);
// }
