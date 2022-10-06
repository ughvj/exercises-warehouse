#include <stdio.h>

struct student {
    char name[256];
    int age;
    int point;
    char result;
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
        if (students[i].point >= 90) {
            students[i].result = 'A';
        } else {
            students[i].result = 'B';
        }
    }
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %d %c\n",
            students[i].name,
            students[i].age,
            students[i].point,
            students[i].result
        );
    }
}
