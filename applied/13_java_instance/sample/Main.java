import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // Squareのインスタンスを作成する
        Square squares[][] = new Square[3][3];
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                squares[i][j] = new Square();
            }
        }

        // Numberのインスタンスを作成する
        Number numbers[] = new Number[10];
        for (int i=0; i<10; i++) {
            numbers[i] = new Number();
            // Numberに数字をセットする
            numbers[i].n = i;
        }

        squares[0][0].SetNumber(numbers[1]);
        squares[0][1].SetNumber(numbers[2]);
        squares[0][2].SetNumber(numbers[3]);
        squares[1][0].SetNumber(numbers[4]);
        squares[1][1].SetNumber(numbers[5]);
        squares[1][2].SetNumber(numbers[6]);
        squares[2][0].SetNumber(numbers[7]);
        squares[2][1].SetNumber(numbers[8]);
        squares[2][2].SetNumber(numbers[9]);

        // 使用済みの数字を記録する配列を準備する
        int[] used = new int[10];
        for (int i=0; i<10; i++) {
            used[i] = 0;
        }

        // 使用している数字をカウントする
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                used[squares[i][j].n.n]++;
            }
        }

        // 1~9の数字を一つずつ使っていたらOK
        for (int i=1; i<10; i++) {
            // 0 or 2以上だったらその時点でNG
            if (used[i] != 1) {
                System.out.printf("NG\n");
                break;
            }
            // ループが最後まで到達したら
            if (i == 9) {
                System.out.printf("OK\n");
            }
        }
    }
}
