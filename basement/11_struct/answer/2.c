#include <stdio.h>

struct student {
    char name[256];
    int age;
    char hobby[256];
};

int main(void){
    int i;
    struct student students[5] = {
        {"ジョニー", 17, "読書"},
        {"レイモンド", 16, "釣り"},
        {"鈴木一郎", 16, "ゲーム"},
        {"メアリー", 17, "なし"},
        {"田中花子", 17, "映画鑑賞"}
    };
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %s\n",
            students[i].name,
            students[i].age,
            students[i].hobby
        );
    }
}
