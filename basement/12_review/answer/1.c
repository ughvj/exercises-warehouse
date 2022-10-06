#include <stdio.h>

struct student {
    char name[256];
    int age;
    int point;
};

int main(void){
    int i;
    struct student students[5] = {
        {"ジョニー", 17, 80},
        {"レイモンド", 16, 90},
        {"鈴木一郎", 16, 87},
        {"メアリー", 17, 78},
        {"田中花子", 17, 97}
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %d\n",
            students[i].name,
            students[i].age,
            students[i].point
        );
    }
}
