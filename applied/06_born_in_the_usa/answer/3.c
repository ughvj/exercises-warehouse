// 5*5の大きさの迷路があります
// `*` は通ることのできないカベ、 `-` は通ることのできる道です
// 迷路の構造は自分で好きに決めて構いません
// 2つの数字を入力し、その座標がカベor道or存在しない座標か出力します

#include <stdio.h>
int main(void){
    // 0 is wall
    // 1 is road
    int maze[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 1, 0}
    };
    int i, j;
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    if (maze[5-y-1][x] == 0) {
        printf("x=%d, y=%dはカベです\n", x, y);
    } else {
        printf("x=%d, y=%dは道です\n", x, y);
    }

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (maze[i][j] == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}
