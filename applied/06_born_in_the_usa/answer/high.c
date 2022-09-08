// 入力された文字列について、無限にしりとりが成立するか判定しよう

#include <stdio.h>
int main(void){
    int i;
    int start[26] = {0};
    int end[26] = {0};
    char input[5];
    
    for (scanf("%s", input); input[0] != '0'; scanf("%s", input)) {
        start[input[0] - 0x61]++;
        end[input[4] - 0x61]++;
    }
    for (i=0; i<26; i++) {
        if (start[i] != end[i]) break;
    }
    if (i == 26) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
