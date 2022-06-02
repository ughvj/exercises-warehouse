// 100までの素数を全て出力しよう

#include <stdio.h>
int main(void){
    int i, j;
    
    for (i=2; i<=100; i++) {
        for (j=2; j<i; j++) {
            if (i % j == 0) break;
        }
        if (i == j) printf("%d\n", i);
    }
}
