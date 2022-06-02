// 1つの数字を入力して、その回数だけ `Hello world !` と出力しよう

#include <stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("Hello world !\n");
    }
}
