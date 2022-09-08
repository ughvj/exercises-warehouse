#include <stdio.h>
int main(void){
    int diameter, height;

    scanf("%d", &diameter);
    scanf("%d", &height);
    
    float pi = 3.14;

    int radius = diameter / 2;
    float area = radius * radius * height * pi;
    
    printf("%.1f\n", area);
    return 0;
}
