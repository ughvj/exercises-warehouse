#include <stdio.h>
int main(void){
    int divider, quotient, remainder;
    scanf("%d", &divider);
    scanf("%d", &quotient);
    scanf("%d", &remainder);

    // dividee / divider = quotient
    // dividee           = quotient * divider
    // dividee           = quotient * divider + remainder
    printf("%d\n", divider * quotient + remainder);

    return 0;
}
