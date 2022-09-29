#include <stdio.h>

struct seiseki {
    int number;     // 出席番号
    char name[256]; // 名前
    int point;      // 点数
    char result;    // 判定
};

int main(void){
    struct seiseki student = {1, "田中一郎", 90, 'A'};

    printf("出席番号: %d\n", student.number);
    printf("名前　　: %s\n", student.name);
    printf("点数　　: %d\n", student.point);
    printf("判定　　: %c\n", student.result);
}
