#include <stdio.h>
int main(void){
    int input;
    scanf("%d", &input);

    if (input < 0) {
        printf("%d\n", input*-1);
    } else {
        printf("%d\n", input);
    }

    return 0;
}
