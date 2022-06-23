#include <stdio.h>

int goukei(void) {
    int i;
    int sum = 0;
    for (i=1; i<=10; i++) {
        sum += i;
    }
    return sum;
}

int main(void){
    printf("%d\n", goukei());
}
