// 1から100までの整数のうち、偶数だけを出力しよう

#include <stdio.h>
int main(void){
    int i;
    for (i=1; i<=100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}
