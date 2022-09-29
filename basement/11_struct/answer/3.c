#include <stdio.h>

struct student {
    char name[256];
    int age;
    char hobby[256];
    float height;
};

int main(void){
    int i;
    struct student students[5] = {
        {"ジョニー", 17, "読書", 172.1},
        {"レイモンド", 16, "釣り", 176.4},
        {"鈴木一郎", 16, "ゲーム", 164.6},
        {"メアリー", 17, "なし", 163.2},
        {"田中花子", 17, "映画鑑賞", 158.4}
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %s %.1f\n",
            students[i].name,
            students[i].age,
            students[i].hobby,
            students[i].height
        );
    }
}
