#include <stdio.h>
int main(void){
    float diameter, height;
    
    scanf("%f", &diameter);
    scanf("%f", &height);

    float pi = 3.14;
    float pi_truncated = 3.0;    

    float radius = diameter / 2;
    float area = radius * radius * height * pi;
    float area_truncated = radius * radius * height * pi_truncated;
    
    printf("%.1f\n", area);
    printf("%.1f\n", area_truncated);
    printf("%.1f\n", area - area_truncated);
    return 0;
}
