#include <stdio.h>

struct student {
    char name[256];
    int age;
};

int main(void){
    int i;
    struct student students[5] = {
        {"ジョニー", 17},
        {"レイモンド", 16},
        {"鈴木一郎", 16},
        {"メアリー", 17},
        {"田中花子", 17}
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d\n",
            students[i].name,
            students[i].age
        );
    }
}
