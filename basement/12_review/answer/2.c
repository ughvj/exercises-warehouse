#include <stdio.h>

struct student {
    char name[256];
    int age;
    int point;
};

int main(void){
    int i, cnt;
    struct student students[5] = {
        {"ジョニー", 17, 80},
        {"レイモンド", 16, 90},
        {"鈴木一郎", 16, 87},
        {"メアリー", 17, 78},
        {"田中花子", 17, 97}
    };
    
    for (i=0, cnt=0; i<5; i++) {
        if (students[i].point >= 90) {
            cnt++;
        }
    }
    printf("90点以上の生徒: %d\n", cnt);

    for (i=0, cnt=0; i<5; i++) {
        if (students[i].point < 90) {
            cnt++;
        }
    }
    printf("90点未満の生徒: %d\n", cnt);
}
