// 5*5の大きさの迷路があります
// `*` は通ることのできないカベ、 `-` は通ることのできる道です
// 迷路の構造は自分で好きに決めて構いません
// 2つの数字を入力し、その座標がカベor道or存在しない座標か出力します

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int[][] maze = {
            {0, 0, 1, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 0, 1, 0}
        };
        
        int x = scan.nextInt();
        int y = scan.nextInt();
        
        if (maze[5-y-1][x] == 0) {
            System.out.printf("x=%d, y=%dはカベです\n", x, y);
        } else {
            System.out.printf("x=%d, y=%dは道です\n", x, y);
        }
        
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                if (maze[i][j] == 0) {
                    System.out.printf("*");
                } else {
                    System.out.printf("-");
                }
            }
            System.out.printf("\n");
        }
    }
}
