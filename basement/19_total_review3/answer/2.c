#include <stdio.h>

struct student {
    char name[256];
    int age;
};

int main(void){
    int i;
    struct student students[5] = {
        {"ネイサン", 19},
        {"パウロ", 18},
        {"ガブリエル", 16},
        {"グエン", 18},
        {"タカヒロ", 17}
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d\n",
            students[i].name,
            students[i].age
        );
    }
}
