// 1つの数字(n)を入力して、その段数のピラミッドを出力しよう

#include <stdio.h>
int main(void){
    int n, m, i;
    scanf("%d", &n);
    
    for (m=1; m<=n; m++) {
        for (i=0; i<n-m; i++) {
            printf(" ");
        }
        for (i=0; i<2*m-1; i++) {
            printf("*");
        }
        printf("\n");
    }
}
