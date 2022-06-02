// 九九を9の段まで全て出力しよう(式も出力しよう)

#include <stdio.h>
int main(void){
    int i, j;
    
    for (i=1; i<=9; i++) {
        for (j=1; j<=9; j++) {
            printf("%d*%d=%d\n", i, j, i*j);
        }
    }
}
