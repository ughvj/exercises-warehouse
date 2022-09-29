#include <stdio.h>

struct record {
    int japanese;
    int math;
    int society;
    int science;
};

struct student {
    char name[256];
    int age;
    char hobby[256];
    float height;
    struct record seiseki;
};

int main(void){
    int i;
    struct student students[5] = {
        {"ジョニー", 17, "読書", 172.1, {85, 72, 81, 76}},
        {"レイモンド", 16, "釣り", 176.4, {65, 94, 54, 86}},
        {"鈴木一郎", 16, "ゲーム", 164.6, {90, 91, 71, 86}},
        {"メアリー", 17, "なし", 163.2, {81, 96, 97, 90}},
        {"田中花子", 17, "映画鑑賞", 158.4, {70, 86, 98,64} }
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %s %.1f %d %d %d %d\n",
            students[i].name,
            students[i].age,
            students[i].hobby,
            students[i].height,
            students[i].seiseki.japanese,
            students[i].seiseki.math,
            students[i].seiseki.society,
            students[i].seiseki.science
        );
    }
}
