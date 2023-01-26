#include <stdio.h>
int main(void){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        printf("入力が正しくありません\n");
        return 0;
    }
    
    printf("%d\n", x+y);
    printf("%d\n", x-y);
    printf("%d\n", x*y);
    printf("%d\n", x/y);
    return 0;
}
