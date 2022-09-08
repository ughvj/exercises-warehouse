#include <stdio.h>
#include <string.h>
int main(void){
    char str[500];
    
    scanf("%s", str);
    
    if (strcmp(str, "kawaii_neko") == 0) {
        printf("突破!\n");
    } else {
        printf("ニャー\n");
    }
}
