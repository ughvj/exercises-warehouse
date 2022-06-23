// 5個の数を入力し、それらを昇順に並べて出力しよう
// 1から100までのうち5個の数が、重複なく入力されます

#include <stdio.h>
int main(void){
    int i, input;
    int sorted[100] = {0};
    for (i=0; i<5; i++) {
        scanf("%d", &input);
        sorted[input-1] = 1;
    }
    for (i=0; i<100; i++) {
        if (sorted[i] == 1) {
            printf("%d\n", i+1);
        }
    }
}
