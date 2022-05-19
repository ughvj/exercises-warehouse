#include <stdio.h>
int main(void){
    int diameter = 6;
    int height = 10;
    float pi = 3.14;

    int radius = diameter / 2;
    float area = radius * radius * height * pi;
    
    printf("%.1f\n", area);
    return 0;
}
