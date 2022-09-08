#include <stdio.h>
int main(void){
    int a, b, c, max;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    max = a;
    
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    
    printf("%d\n", max);

    return 0;
}
