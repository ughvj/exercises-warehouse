#include <stdio.h>
int goukei(int n) {
    int i;
    int sum = 0;
    for (i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main(void){
    int input;
    scanf("%d", &input);
    printf("%d\n", goukei(input));
}
