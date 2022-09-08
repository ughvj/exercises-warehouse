// 1つの数字を入力して、その回数だけ"Hello world!"と出力しよう

#include <stdio.h>
int main(void){
    int i, input;
    scanf("%d", &input);
    
    for (i=0; i<input; i++) {
        printf("Hello world!\n");
    }
}
