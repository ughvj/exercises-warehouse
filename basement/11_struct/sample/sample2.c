#include <stdio.h>

struct seiseki {
    int number;     // 出席番号
    char name[256]; // 名前
    int point;      // 点数
    char result;    // 判定
};

int main(void){
    int i;
    struct seiseki students[3] = {
        {1, "田中一郎", 90, 'A'},
        {2, "鈴木二郎", 85, 'B'},
        {3, "山田三郎", 63, 'C'}
    };

    for (i=0; i<3; i++) {
        printf("%d番目の生徒\n", i+1);
        printf(" 出席番号: %d\n", students[i].number);
        printf(" 名前　　: %s\n", students[i].name);
        printf(" 点数　　: %d\n", students[i].point);
        printf(" 判定　　: %c\n", students[i].result);
    }
}
