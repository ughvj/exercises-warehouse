#include <stdio.h>

struct student {
    char name[256];
    int age;
    int point;
};

int main(void){
    int i, j;
    int rank[5] = {0, 0, 0, 0, 0};
    struct student students[5] = {
        {"ジョニー", 17, 80},
        {"レイモンド", 16, 90},
        {"鈴木一郎", 16, 87},
        {"メアリー", 17, 78},
        {"田中花子", 17, 97}
    };
    struct student swapped[5];

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (students[i].point < students[j].point) {
                rank[i]++;
            }
        }
        swapped[rank[i]] = students[i];
    }
    
    for (i=0; i<5; i++) {
        printf(
            "%s %d %d\n",
            swapped[i].name,
            swapped[i].age,
            swapped[i].point
        );
    }
}
